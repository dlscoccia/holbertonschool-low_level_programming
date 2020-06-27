#include "holberton.h"
#include <stdio.h>
/*
* n times table
*/ void print_times_table(int n)
{
	int l;
	int c;
	int r;
	int d;
	int e;

	l = 0;
	if (n > 0 && n <= 15)
	{
		while (l <= n)
		{
			c = 0;
			while (c <= n)
			{
				r = l * c;
				if (r == 0 && c == 0)
				{
					_putchar('0' + r);
				}
				if (r == 0 && c != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				}
				if (r > 0 && r < 10)
				{
					_putchar(' ');
					_putchar(' ');
					d = r % 10;
					_putchar('0' + d);
				}
				if (r >= 10 && r < 100)
				{
					_putchar(' ');
					d = r / 10;
					_putchar('0' + d);
					d = r % 10;
					_putchar('0' + d);
				}
				if (r >= 100)
				{
					e = r / 10;
					d = e / 10;
					_putchar('0' + d);
					e = r - (d * 100);
					e = e / 10;
					_putchar('0' + e);
					d = r % 10;
					_putchar('0' + d);
				}
				if (c != n)
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
}
