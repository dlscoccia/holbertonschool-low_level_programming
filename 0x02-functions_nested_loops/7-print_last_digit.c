#include "holberton.h"
/*
* last digit
*/ int print_last_digit(int n)
{
int m;
m = n % 10;
if (m < 0)
m = m * -1;
_putchar('0' + m);
return (m);
}
