#include "holberton.h"
/*
 * check for uppercase
 */int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
