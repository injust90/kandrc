#include <stdio.h>
#include <limits.h>

void put_thousand() 
{
    for (int i = 0; i < 10; ++i)
    {
        putchar(' ');
    }
    for (unsigned int i = 0; i < 999 - 1; ++i)
    {
        putchar('b');
        putchar(' ');
    }
    for (int i = 0; i < 10; ++i)
    {
        putchar('\t');
    }
    putchar('\n');
    for (int i = 0; i < 10; ++i)
    {
        putchar('\n');
    }
    for (int i = 0; i < 800; ++i)
    {
        putchar('c');
        putchar('\t');
    }
    putchar('\n');
    for (int i = 0; i < 700; ++i)
    {
        putchar('d');
    }
    putchar('\n');
    for (int i = 0; i < 1000; ++i)
    {
        putchar('a');
    }
    putchar('\n');
    for (int i = 0; i < 600; ++i)
    {
        putchar('e');
    }
    putchar('\n');
    for (int i = 0; i < 500; ++i)
    {
        putchar('f');
    }
}

int main()
{
    put_thousand();
}
