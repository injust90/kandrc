# Exercise 1-23
Write a program to remove all comments from a C program.
Don't forget to handle quoted strings and character constants properly.
C comments do not nest.


Input:
/*
This is a multiline comment
*/
"/* This isn't a comment because it's in a string"
asdf    poiupoiu

Output:
This is a multiline comment
"/* This isn't a comment because it's in a string"
asdf    poiupoiu

Hard Mode Test Case:
/* "asdf" */

if we see quotation marks, then we ignore the /* pattern, but start printing anyways.
If we see a /* pattern, then we start counting and storing up to when we see */


Just checking for quotation marks
// Check to see if there is a quote, so that we are checking that it isn't a string
if (c == '"') {
    store[i] = c;
    // Store the entire string up to the next quotation mark
    while ((c=getchar()) != '"') {
        ++i;
        store[i] = c;
    }
    ++i;
    store[i] = '"';
    for (int j = 0; j < i; ++j) {
        putchar(store[j]);
    }
    i = 0;
}

// First version, doesn't quite work right because it adds a *
while((c=getchar()) != EOF) {
    if (c == '"') {
        putchar(c);
        store[i] = '"';
    }
    else if (c == '/' && store[i] != '"') {
        ++i;
        store[i] = c;
        // Getting the second character to test if it is *
        c = getchar();
        store[i + 1] = c;
        if (store[i + 1] == '*') {
            while(store[i - 1] != '/' && store[i] != '*')
            {
                store[i] = getchar();
                ++i;
            }
            // Printing two spots less before and after to account for the comments
            for (int j = 0; j < i - 2; ++j) {
                putchar(store[i + 2]);
            }
        }
    }
    else {
        putchar(c);
        i = 0;
    }
}
