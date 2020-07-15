#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @cmp: function that search for an int given
 * @size: n of elements
 * @array: array to search for int elements
 * Return: indexin de array of the firts int element found
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL) /* checks for null arguments */
		return (-1);

	if (size <= 0) /* checking for needed size > 0 */
		return (-1);

	while (i < size) /* iterates the string until firts match on cmp(array[i] */
	{
		if (cmp(array[i]) != 0)
			return (i); /* index array[i] */
		i++;
	}
	return (-1); /* no matches return */
}
