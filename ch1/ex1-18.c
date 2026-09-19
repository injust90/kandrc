// Exercise 1-18 Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
#include <stdio.h>
#define MAXLINE 1000
#define IN 1
#define OUT 0

void trail(char to[], char from[], int len);

int main() 
{
    char from[MAXLINE];

    int c, i, len = 0;

    while((c=getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            ++i;
        }
        else if (c == '\n') {
            len -= i;
        }
        ++len;
    }

    char to[len];
}

void trail(char to[], char from[], int len) {
    int i, j = 0;
    while(from[i] != '\0') {
        if (from[i] == ' ' || from[i] == '\t') {
            ++j;
        }
        else if (c == '\n') {
            j = 0;
        }
        for (int k = 0; k < j; ++k) {
            to[i] = from[i];
        }
        else {
            j = 0;
        }
        ++i;
    }
}
