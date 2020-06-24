#include "holberton.h"
/*
* prints a string in reverse
*/ void print_rev(char *s)
{
	char NULL = NULL;
	int i = 0;

	while (*s != NULL)
	{
		i++;
		s++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
