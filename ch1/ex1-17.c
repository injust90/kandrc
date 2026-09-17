#include <stdio.h>

#define IN 1
#define OUT 0
#define INSIDE 2
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {            // There was a line
        printf("%s", longest);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; lim - 1 && (c = getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;  // Whole array iterator
    int k = 0;  // Space Counter 
    int j = 0;  // Place Counter

    while (from[i] != '\0') {
        int j = 0;
        if (from[i] == ' ' || from[i] == '\t') {
            ++k;
        }
        else if (from[i] == '\n' || from[i] == '\0') {
        }
        else {
            k = 0;
        }
        to[i] = from[i + k];
    }
}
