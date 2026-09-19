// Exercise 1-19 Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>
#define MAXLINE 1000

void reverse(char to[], char from[], int len);
void copy(char to[], char from[], int len);

int main() 
{
    char from[MAXLINE] = {};

    int c, i, len = 0;

    while((c=getchar()) != EOF) {
        from[i] = c;
        ++len;
        ++i;
    }
    
    char to[len + 2] = {};
    reverse(to, from, len);
}

void copy(char to[], char from[], int len)
{
    int i;
    i = 0;

    for (i; i < len - 1; ++i) {
        to[i] = '*';
    }

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        printf("%s\n", to);
        ++i;
    }
    printf("%s", to);
}

void reverse(char to[], char from[], int len)
{
    int c;

    /*
    for (int i = 0; from[i]; i++)
        to[i] = from[len - i - 1];
    */
    for (int i = 0; from[i]; i++)
        to[len - 1 - i] = from[i];
    printf("%s\n", to + 1);
}
