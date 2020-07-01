#include "holberton.h"
/*
 * Function - prints string in reverse with recursion
 * @ entry point string
 */ void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
