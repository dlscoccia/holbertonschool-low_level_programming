#include "holberton.h"
/*
 * function that returns the value of x raised to the power of y
 */ int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
		return (x * _pow_recursion(x, y + 1));
	}
	if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
