#include "holberton.h"
/*
* Function: prints an string with recursion
* @char: entry string
*/ void _puts_recursion(char *s)
{
	char c = *s;

	if (*s != '\0')
	{
		_putchar(c);
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
