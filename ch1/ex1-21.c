#include <stdio.h>

int main() 
{
    int spaces = 0;
    int c;
    int tabadd = 0;

    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            ++spaces;
        }
        else {
            tabadd = spaces / 4;
            spaces = spaces % 4;
            for (int j = 0; j < spaces; ++j) {
                putchar(' ');
            }
            for (int i = 0 ; i < tabadd; ++i) {
                putchar('\t');
            }
            spaces = 0;
            putchar(c);
        }
    }
}
