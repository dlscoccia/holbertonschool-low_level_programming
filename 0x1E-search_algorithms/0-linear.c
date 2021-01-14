#include "search_algos.h"

/**
 *linear_search - searches a value in an array of integers using Linear search
 *@array: of int elements
 *@size: of the array
 *@value: to search for
 *Return: index of value if founded; otherwise -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
