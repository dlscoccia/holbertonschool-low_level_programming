#include "holberton.h"
/*
* print 0 to 9 except 2 & 4
*/ void print_most_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
