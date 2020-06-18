#include "holberton.h"
/*
 * print 1 to 14 x 10 times
 */ void more_numbers(void)
{
int a;
int b;
int c;

b = 0;
while (b <= 9)
{
	a = 0;
	while (a <= 14)
	{
		if (a > 9)
		{
			c = a / 10;
			_putchar('0' + c);
		}
		c = a % 10;
		_putchar('0' + c);
		a++;
	}
	b++;
	_putchar('\n');
}
}
