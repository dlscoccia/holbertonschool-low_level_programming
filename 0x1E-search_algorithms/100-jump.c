#include <stdio.h>
#include <stdlib.h>
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
size_t index;
size_t jump = sqrt(size);

for (index = 0; index <= size; index = index + jump)
{
if ((index >= size) || (index >= (size_t)value))
{
printf("Value found between indexes [%lu] and [%lu]\n", (index - jump), index);
if ((index + jump) > size)
{
for (index; index <= size; index++)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
}
}
else
{
index -= jump;
for (index; index <= (index + jump); index++)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
}
}
}
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
}
printf("Value found between indexes [%lu] and [%lu]\n", (index - jump), index);
index -= jump;
printf("Value checked array[%lu] = [%d]\n", (index), array[index]);
return (-1);
}
