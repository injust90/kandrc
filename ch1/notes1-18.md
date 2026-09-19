# Exercise 1-18 Trailing tabs and spaces

Check to see if there are spaces and tabs at the beginning, then once we reach a character, copy the character

Input:  abcd    abcd
State:  1111111111110000
Output: acbd    abcd
i:      0123456789ABCDEF
        0123456789
j:      0123456789AB

State is OUT, but if we hit a word, we're back in, and we re-write the previous x number of spaces

array - j putchar
Add j to i so that it "skips"

State is IN if we have not seen tab or space at the beginning
We know we're at the beginning if a word has not been seen yet. We're at the end if a newline has been seen.

State is OUT by default
if we see a character, state is IN, and if we see a newline state is out

while from is not equal to null terminator
    if we see space or tab state is OUT
        if we see another character state is IN
            else we see null terminator
                state is OUT

"You could just have a counter that you reset whenever you encounter a character that's not a space or a tab, and then when you hit a newline, you print the line minus whatever the counter is as that's the number of trailing spaces. if the line was fully whitespace, then the counter will be equal to the length of the line so you just print nothing."


