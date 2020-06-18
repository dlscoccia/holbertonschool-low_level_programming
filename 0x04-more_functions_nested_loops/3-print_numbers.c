#include "holberton.h"
/*
 * print 0 to 9
 */ void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{_putchar(a);
		a++; }
	_putchar('\n');
}
