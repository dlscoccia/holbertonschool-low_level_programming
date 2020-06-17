#include "holberton.h"
/*
* function for alphabet
*/ void print_alphabet_x10(void)
{
char c, d;
c = 'a';
d = '0';
while (d <= '9')
{
while (c <= 'z')
{
_putchar(c);
c++;
}
c = 'a';
d++;
_putchar('\n');
}
}
