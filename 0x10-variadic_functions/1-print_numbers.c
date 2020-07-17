#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints a list of elements separarate
 * @separator: string of separator
 * @n: number of elements
 * @...: elements list
 * Return: void - prints during execution
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list; /* @initialize variables - va & iterator */
	unsigned int i = 0;

	va_start(list, n); /* initialize list starts at ... */

	for (; i < n; i++) /* loop to print the list n elements */
	{
		if (i + 1 < n) /* to avoid printing separator after last element */
		{
			printf("%d", va_arg(list, int));
			if (separator != NULL) /* to avoid printing separator if it is null */
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(list, int)); /* print last element */
	}
	va_end(list); /* free list */
	printf("\n"); /* print new line */
}
