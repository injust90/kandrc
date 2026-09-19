// Exercise 1-18 Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
#include <stdio.h>
#define MAXLINE 1000
#define IN 1
#define OUT 0

int main() 
{
    int c;
    int i = 0;
    int state = OUT;

    char store[MAXLINE];

    while((c=getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            store[i] = c;
            ++i;
            state = OUT;
        }
        else if (c == '\n') {
            i = 0;
            putchar('\n');
        }
        else {
            if (state == OUT) {
                for (int k = 0; k < i; ++k) {
                    putchar(store[k]);
                }
            }
            state = IN;
            putchar(c);
        }
    }
}
