#include "holberton.h"
/*
 * print straight n lines
 */ void print_line(int n)
{
int a;

a = 0;
if (n <= 0)
{
	_putchar('\n');
}
else
{
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
}
