#include "search_algos.h"
/**
 * interpolation_search - binary type search pos ecuation
 * @array: to search
 * @size: of the array
 * @value: to search in array
 * Return: index if founded; -1 if not
 **/
int interpolation_search(int *array, size_t size, int value)
{
int low = 0, high = (size - 1);

if (array == NULL)
return (-1);

int pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
if ((size_t)pos > size)
printf("Value checked array[%d] is out of range\n", pos);
while (low <= high && value >= array[low] && value <= array[high])
{
if (low == high)
{
if (array[low] == value)
return (low);

return (-1);
}
if ((size_t)pos < size)
printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
return (pos);

if (array[pos] < value)
low = pos + 1;

else
high = pos - 1;
pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
}
return (-1);
}
