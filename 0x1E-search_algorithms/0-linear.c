#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches a value in an array of integers using Linear search
 * @array: of int elements
 * @size: of the array
 * @value: to search for
 * Return: index of value if founded; otherwise -1
 **/

int linear_search(int *array, size_t size, int value)
{
size_t index;

if (array == NULL)
return (-1);

for (index = 0; index < size; index++)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);

if (array[index] == value)
return (index);
}

return (-1);
}
