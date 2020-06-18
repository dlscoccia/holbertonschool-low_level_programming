#include "holberton.h"
/*
* print square n size
*/ void print_square(int size)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (b < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			b++;
		}
	}
}
