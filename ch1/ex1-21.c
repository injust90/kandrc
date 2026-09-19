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
            for (int i = 0 ; i < tabadd; ++i) {
                putchar('\t');
            }
            putchar(c);
            spaces = 0;
        }
    }
}
