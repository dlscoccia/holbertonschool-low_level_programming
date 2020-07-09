#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of intergers
 * @min: min of the range
 * @max: max of the range
 * Return: array of integer within the range min - max
 **/
int *array_range(int min, int max)
{
	int *array;
	int range, i = 0;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	array = malloc(range * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (i < range)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
