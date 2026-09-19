// Exercise 1-18 Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
#include <stdio.h>
#define MAXLINE 1000
#define IN 1
#define OUT 0

int main() 
{
    int c;
    int i = 0;
    int j = 0;
    int l = 0;
    int state = OUT;

    char store[MAXLINE];

    while((c=getchar()) != EOF) {
        // If we see space or tab, store the space in a separate array
        if (c == ' ' || c == '\t') {
            store[i] = c;
            ++i;
            state = OUT;
        }
        // If we see an newline reset the space counter and check to see if lines are blank or first line 
        else if (c == '\n') {
            i = 0;
            ++l;
            if (l == 1 && j != 0)
                putchar('\n');
        }
        // Else we see a word, and if we are "OUT" of the word then we need to store the space(s). Then reset the state.
        else {
            if (state == OUT) {
                for (int k = 0; k < i; ++k) {
                    putchar(store[k]);
                }
            }
            state = IN;
            l = 0;
            // Increment by one so that it is not the 1st line
            if (j < 1) {
                ++j;
            }
            putchar(c);
        }
    }
}
