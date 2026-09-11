/*
* K&R Exercise 1-14 
* historgram of frequencies of differnt characters
*/

#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int ndigit[26];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++ndigit[c-'a'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    // print out row by row, starting with the number count
    for (i =  0; i < 26; ++i) {
        printf("%c ", 'a' + i);
        for (int j = 0; j < ndigit[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
