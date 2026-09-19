/* 
 * Exercise 1-20.
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
 * Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

Tab stop is determined by the length of the line before \n.

Input: 
    \t   \t

based on the length of the line. how do we determine that?
ab  cde f   \t

version 2



version 1
    while (c = getchar())
        if (\t)
            for (int i = 0; i < 4; ++i)
                putchar(' ');
        else
            putchar(c);
