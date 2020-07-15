#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates an array to printf calling action
 * @action: functions that prints elements - callback
 * @size: n of iterations - n of elements
 * @array: array to itererate and prints
 * Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL) /* cheking if any parameter is null */
		return;
	while (i < size) /* iterates and pass argument [i] to action to print */
	{
		action(array[i]);
		i++;
	}
}
