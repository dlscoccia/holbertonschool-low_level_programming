#include "holberton.h"
#include <stdio.h>
/*
*print n to 98
 */ void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d", n);
putchar(',');
putchar(' ');
n++; }
}
if (n == 98)
printf("%d", n);
if (n > 98)
{
while (n > 98)
{printf("%d", n);
putchar(',');
putchar(' ');
n--; }
printf("%d", n);
}
putchar('\n');
}
