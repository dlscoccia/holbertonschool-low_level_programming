#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variadic function to sum n arguments
 * @n : n of arguments
 * Return: sum = sum of n arguments
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list va_num; /* declare variadic list */
	unsigned int i;
	int sum = 0;

	if (n == 0) /* 1st condition - n != null */
		return (0);

	va_start(va_num, n); /* initialize va_num up to n = variadic list */

	for (i = 0; i < n; i++)
		sum += va_arg(va_num, int); /* operation */

	return (sum); /* return value */
}
