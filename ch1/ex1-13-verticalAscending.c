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
	    printf("%d ", i);
    }
    printf("\n");
    int max = 0;
    // Checking for max to determine the depth/height of the numbers that need to be printed
    for (i = 0; i < 10; ++i) {
	    if (ndigit[i] > max) {
		    max = ndigit[i];
	    }
    }

    printf("MAX: %d", max);

    // Now that we have depth, we will use it to print out the length of the digits.
	
    /*
    for (j = 0; j < 10; ++j) {
	    if(ndigit[i] > 0) {
		    printf("* ");
	    }
    }
    */
}
