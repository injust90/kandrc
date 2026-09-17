/* Exercise 1-15 Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

int temp_conv(int fahr) 
{
    int celsius = 0;

    celsius = 5 * (fahr - 32) / 9;
    return celsius;
}

/* Print Fahrenheight-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
    printf("%d\n", temp_conv(0));
    printf("%f\n", temp_conv(0));
}
