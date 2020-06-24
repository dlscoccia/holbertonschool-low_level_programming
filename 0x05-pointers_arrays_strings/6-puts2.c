#include "holberton.h"
/*
 * prints every 2 chars
 */ void puts2(char *str)
{
char NULL = NULL;
int i;

while (*str != NULL)
{
	if (i % 2 == 0)
	{
		_putchar(*str);
	}
	i++;
	str++;
}
_putchar('\n');
}
