#include "holberton.h"
#include <stdio.h>
/*
 * times table
 */ void times_table(void)
{
	int l;
	int c;
	int r;
	int d;

	l = 0;
	while (l < 10)
	{
		c = 0;
		while (c < 10)
		{
			r = l * c;
			if (r == 0)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			if (r > 0 && r < 10)
			{
				_putchar(' ');
				d = r % 10;
				_putchar('0' + d);
			}
			if (r >= 10)
			{
				d = r / 10;
				_putchar('0' + d);
				d = r % 10;
				_putchar('0' + d);
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		l++;
		_putchar('\n');
	}
}
