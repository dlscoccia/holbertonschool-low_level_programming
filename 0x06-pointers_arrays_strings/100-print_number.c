#include "holberton.h"
/*
* prints a interger
*/ void print_number(int n)
{
	int y = 0;
	int x = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	if (n >= 10 && n < 100)
	{
		x = n / 10;
		_putchar('0' + x);
		x = n % 10;
		_putchar('0' + x);
	}
	if (n >= 100 && n < 1000)
	{
		y = n / 10;
		x = y / 10;
		_putchar('0' + x);
		x = n - (x * 100);
		x = x / 10;
		_putchar('0' + x);
		x = n % 10;
		_putchar('0' + x);
	}
	if (n >= 1000 && n < 10000)
	{
		y = n / 10;
		y = y / 10;
		x = y / 10;
		_putchar('0' + x);
		y = n / 10;
		x = y / 10;
		y = x;
		x = x % 10;
		_putchar('0' + x);
		x = n - (y * 100);
		x = x / 10;
		_putchar('0' + x);
		x = n % 10;
		_putchar('0' + x);
	}
}
