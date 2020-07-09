#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void.
 **/
void *malloc_checked(unsigned int b)
{
	void *checker; /** not associated with any data types
			*points to the address of variables **/

	checker = malloc(b); /* allocate memory for variable b */
	if (checker == NULL)
		exit(98); /* address already in use */

	return (checker);

}
