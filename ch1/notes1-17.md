# Exercise 1-17 Trailing tabs and spaces

Check to see if there are spaces and tabs at the beginning, then once we reach a character, copy the character

Input:    abcd    abcd
State: 0001111222211110000
Output: acbd    abcd

State is IN if we have not seen tab or space at the beginning
We know we're at the beginning if a word has not been seen yet. We're at the end if a newline has been seen.

State is OUT by default
if we see a character, state is IN, and if we see a newline state is out
