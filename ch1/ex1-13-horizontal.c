/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

/* count digits, white space, others */
int main () {
    int character, i, nwhite, nother;
    int j = 0;
    int ndigit[10];

    nwhite = nother = 0;
    // set starting numbers to 0
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    // Until end of file, count characters
    while ((character = getchar()) != EOF)
        if (character >= '0' && character <= '9')
            ++ndigit[character-'0'];
        else if  (character == ' ' || character == '\n' || character == '\t')
            ++nwhite;
        else
            ++nother;

    for (i = 0; i < 10; ++i) {
	    printf("%d: ", i);
	    for (j = 0; j < ndigit[i]; ++j) {
			printf("*");
		}
	    printf("\n");
    }
}
