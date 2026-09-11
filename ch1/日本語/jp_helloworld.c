/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/* count digits, white space, others */
int main () {
	int jp_word_count = 0;
	const wchar_t *wstr = L"こんにちは！";
	
	setlocale(LC_ALL, "");

	wprintf(L"%ls\n", wstr);
	return 0;
}
