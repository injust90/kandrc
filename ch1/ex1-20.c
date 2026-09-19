/* 
 * Exercise 1-20.
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
 * Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXLINE 1000
#define tabwidth 4

int main()
{
    int c;
    int len = 0;
    int tabstop = 0;

    while ((c=getchar()) != EOF) {
        ++len;
        // Determine the tabwidth and the stop
        tabstop = len % tabwidth;
        // If we see a tab, then we add the space/star
        if (c == '\t') {
            for (int i = 0; i < tabstop; ++i) {
                putchar(' ');
            }
        }
        else {
            putchar(c);
        }
    }
}
