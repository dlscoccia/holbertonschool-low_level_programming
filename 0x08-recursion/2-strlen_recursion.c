#include "holberton.h"
/*
 * Function that finds the lenght of string
 */ int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
