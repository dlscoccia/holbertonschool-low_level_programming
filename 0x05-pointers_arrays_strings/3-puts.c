#include "holberton.h"
/*
 * prints a strings
 */ void _puts(char *str)
{
	 int NULL = NULL;

while (*str != NULL)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
