#include "search_algos.h"
#include <math.h>

/**
 * jump_search - binary type search using sqrt to jump
 * @array: to search
 * @size: of the array
 * @value: to search in array
 * Return: index if founded; -1 if not
 **/
int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size); /* sqrt(size) */
size_t index;

if (array == NULL)
return (-1);

for (index = 0; index <= size; index += jump)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if ((index + jump) >= (size_t)value)
{
printf("Value found between indexes [%lu] and [%lu]\n", index, (index + jump));
while (index <= (index + jump))
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
index++;
}
}
else if (index == (size - 1))
{
printf("Value found between indexes [%lu] and [%lu]\n", index, (index + jump));
while (index <= size - 1)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
index++;
}
}
}
return (-1);
}
