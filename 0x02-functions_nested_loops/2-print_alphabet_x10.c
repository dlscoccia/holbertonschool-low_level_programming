#include "holberton.h"
/*
* function for alphabet
*/ void print_alphabet_x10(void)
{
char c;
 int d=1;
c = 'a';
while (d <= 10)
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
