#include <stdio.h>
#define linebreak 80

int main()
{
    int c;
    int i = 0;

    while ((c=getchar()) != EOF) {
        ++i;
        if (c == ' ' || c == '\t') {
        }
        else if (c != '\n') {
            putchar(c);
        }
        if (i % 80 == 0) {
            putchar('\n');
        }
    }
}
