#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLINE 1000

int main()
{
    int len;    // current line length
    int max;    // maximum length seen so far
    int i = 0;  // Position of the array
    int j = 0;  // 
    int k = 0;  // Adjusts the position of the written array (j)
    int state = IN;
    char c;
    char to[MAXLINE];
    char from[MAXLINE];

    // Writes from to an array for easy writing
    while ((c = getchar()) != EOF) {
        from[i] = c;
        ++i;
    }

    i = 0;

    while ((to[i] = from[i]) != '\0') {
        if (from[i] == ' ' || from[i] == '\t') {
            ++j;
        } 
        else if (from[i] == '\n') {
            for (k; k < (i - j); ++k) {
                to[k] = from[k];
            }
            j = 0;
        }
        else {
            j = 0;
        }
        ++i;
    }
    to[i] = '\0';
    
    printf("%s", to);

    return 0;
}
