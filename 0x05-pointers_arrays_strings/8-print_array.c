#include "holberton.h"
#include <stdio.h>
/*
* prints arrays of int
*/ void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if ((i + 1) < n)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
