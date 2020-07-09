#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory
 * @ptr: pointer to the firts memory slot
 * @old_size: size to be reallocated
 * @new_size: size after reallocate
 * Return: pointer to the new memory slot
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr = NULL; /* p for new memory space */
	unsigned int i = 0;
	int *pnew, *pptr = NULL; /* pointer to int for newptr cast */

	pptr = (int *)ptr; /* convert *void to *int */
	pnew = (int *)newptr;

	if (old_size == new_size) /* if #1 old = new */
		return (ptr);

	if (new_size == 0 && ptr != NULL) /* if #2 free ptr and return null */
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (new_size > old_size) /* #4 new > old added memory non initialized */
	{
		newptr = malloc(new_size);
		if (newptr == '\0')
		{
			free(newptr);
			return (NULL);
		}
		while (pptr[i] != '\0')
		{
			pnew[i] = pptr[i];
			i++;
		}
		free(ptr);
	}
	return (newptr);
}
