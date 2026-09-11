/*
* K&R Exercise 1-14 
* VERTICAL historgram of frequencies of differnt characters
*/

#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int dword[26];
    int max = 0;

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        dword[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++dword[c-'a'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    // Calculate max for use 
    for (i = 0; i < 26; ++i) {
        if (dword[i] > max) {
            max = dword[i];
        }
    }

    // Print the letter, with the space before. 
    for (i = 0; i < max; ++i) {
        // Print out the dword @ the location of the array's word
        // Column: Print out space(s) the length of the location
        for (int j = 0; j < 26; ++j) {
            // TODO print the space first
            if (dword[j] >= max - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // print the row of letters 
    for (i = 0; i < 26; ++i) {
       printf("%c", 'a' + i);
    }
    printf("\n");
}
