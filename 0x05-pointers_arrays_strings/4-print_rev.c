#include "holberton.h"
/*
 * prints a string in reverse
 */void print_rev(char *s)
{
char i = 0;

while (*s != '\0')
{
	i++;
	s++;
}
while (i >= 0)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	i--;
	s--;
}
_putchar('\n');
}
