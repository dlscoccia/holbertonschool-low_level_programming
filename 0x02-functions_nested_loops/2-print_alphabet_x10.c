#include "holberton.h"
/*
* function for alphabet
*/ void print_alphabet_x10(void)
{
char c, d;
c = 'a';
d = '1';
while (d <= '9')
{
while (c <= 'z')
{
 _putchar(c);
c = c + 1;   
}
d = d + 1;
}
_putchar('\n');
}
