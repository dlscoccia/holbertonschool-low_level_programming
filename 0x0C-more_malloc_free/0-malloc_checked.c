#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void.
 **/
void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);
	if (checker == NULL)
		exit(98);

	return (checker);

}
