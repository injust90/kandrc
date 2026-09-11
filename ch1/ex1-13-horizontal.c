/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

/* count digits, white space, others */
int main () {
    int c, i, nwhite, nother;
    int ndigit[10];
    int word_count = 0;
    int jp_word_count = 0;

    nwhite = nother = 0;
    // set starting numbers to 0
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    // Until end of file, count characters
    while ((c = getchar()) != EOF) {
	if (c >= 'a' && c <= 'z') {
		// printf("%c\n" , c);
		++word_count;
	}
        else if  (c == ' ' || c == '\n' || c == '\t') {
		++ndigit[word_count];
		word_count = 0;
	}
        else {
            ++nother;
	}
    }
    for (i = 0; i < 10; ++i) {
	    printf("%d: ", i);
	    for (int j = 0; j < ndigit[i]; ++j) {
		    printf("*");
	    }
	    printf("\n");
    }
}
