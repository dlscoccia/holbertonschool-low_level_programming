#include "holberton.h"
/*
* print diagonal line n times
*/ void print_diagonal(int n)
{
int a;
int b;

a = 0;
b = 0;
if (n <= 0)
{
	_putchar('\n');
}
else
{
	while (a < n)
	{
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		a++;
		_putchar('\\');
		_putchar('\n');
	}
}
}
