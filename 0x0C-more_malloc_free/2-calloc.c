#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @size: size in bytes of the variable
 * @nmemb: number of elements of the array
 * Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newmem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0) /* blocks or size cant be 0 */
		return ('\0');

	newmem = malloc(sizeof(size) * nmemb); /* number of blocks * size of blocks */

	if (newmem == '\0')
	{
		free(newmem);
		return ('\0'); /* if malloc fails */
	}

	for (; i < nmemb; i++)
	{
		*(newmem + i) = 0; /* setting new memmory with 0 */
	}

	return (newmem); /* pointer to memory allocated */
}
