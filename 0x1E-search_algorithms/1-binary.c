#include "search_algos.h"

/**
 * print_array - prints the array we are searching
 * @array: the array
 * @left: left value
 * @right: right value
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i;
printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - searches a value in a sorted int array with Binary method
 * @array: the sorted array
 * @size:  size of the array
 * @value: to search for
 * Return: index of value if founded; otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, index;

	if (array == NULL)
		return (-1);

	left = 0, right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		index = (left + right) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] < value)
			left = index + 1;
		else
			right = index - 1;
	}

	return (-1);
}
