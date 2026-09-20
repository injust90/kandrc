#include <stdio.h>
#define MAXLINE 1000
#define IN 1
#define OUT 0

int main()
{
    int store[MAXLINE];
    int c;
    int i = 0;

    while((c=getchar()) != EOF) {
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
            for (int j = 0; j < i + 1; ++j) {
                putchar(store[j]);
            }
            i = 0;
        }
        else if (c == '/') {
            store[i] = c;
            while ((c=getchar()) != '/') {
                ++i;
                store[i] = c;
            }
            ++i;
            store[i] = '/';
            for (int j = 2; j < i - 1; ++j) {
                putchar(store[j]);
            }
            i = 0;
        }
       else {
           putchar(c);
       }
    }
}
