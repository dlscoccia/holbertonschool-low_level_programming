#include "holberton.h"
/*
* prints 2nd half of the string
*/ void puts_half(char *str)
{
	int a, i;
	char NULL = NULL;

	while (*str != NULL)
	{
		a++;
		str++;
	}
	a = a / 2;
	i = 0;
	while (i < a)
	{
		i++;
		str--;
	}
	i = 0;
	while (i < a)
	{
		i++;
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
