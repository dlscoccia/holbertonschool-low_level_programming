#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints the strings passed as arguments
 * @separator: sign to separate the strings
 * @n: number of elements to print
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list list; /* declare list and variables */
	char *temp_str; /* temporal str to allow me compare to null */
	unsigned int i = 0;

	va_start(list, n); /* initilize list */
	for (; i < n; i++) /* loop to go through string n elements */
	{
		temp_str = va_arg(list, char *); /* storing temp str */
		if (temp_str != '\0') /* comparing entry str to null condition*/
			printf("%s", temp_str);
		else
			printf("(nil)"); /* if str is null */
		if (i + 1 < n) /* condition to print separator or \n at the end */
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(list); /* end list declaration */
}
