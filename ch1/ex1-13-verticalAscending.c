/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

/* count digits, white space, others */
int main () {
    int c, i, nwhite, nother;
    int j = 0;
    int word_count = 0;
    int dword[10];

    nwhite = nother = 0;
    // set starting numbers to 0
    for (i = 0; i < 10; ++i)
        dword[i] = 0;

    // Until end of file, count characters
    while ((c = getchar()) != EOF) {
	if (c >= 'a' && c <= 'z') {
		++word_count;
	}
        else if  (c == ' ' || c == '\n' || c == '\t') {
		if (word_count != 0) {
			++dword[word_count];
		}
		word_count = 0;
	}
        else {
            ++nother;
	}
    }
    
    int max = 0;
    // Checking for max to determine the height of the numbers that need to be printed
    for (i = 0; i < 10; ++i) {
	    if (dword[i] > max) {
		    max = dword[i];
	    }
    }

    // Check for JUST one ROW
    for (i = 0; i < max; ++i) {
        // Print out the dword @ the location of the array's word
        // Column: Print out space(s) the length of the location
        for (j = 0; j < 10; ++j) {
            // Print out | if >= max, else print *
            if (dword[j] >= max - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Print out the row of numbers
    for (i = 0; i < 10; ++i) {
	    printf("%d", i);
    }
    printf("\n");
}
