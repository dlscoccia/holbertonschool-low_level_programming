#include "holberton.h"
/*
* Function that pritns factorial result of a n given;
* entry point n
*/ int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
