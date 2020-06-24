#include "holberton.h"
/*
* swap
*/ void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
