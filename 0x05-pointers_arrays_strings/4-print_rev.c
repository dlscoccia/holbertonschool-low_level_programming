#include "holberton.h"
/*
 * prints a string in reverse
 */void print_rev(char *s)
{
	int i = 0;

	for (; s[i + 1]; i++)
	{
	}
	for (; s[i]; i--)
		_putchar(s[i]);
	_putchar('\n');
}
