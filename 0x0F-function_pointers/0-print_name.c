#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name given
 * @name: str to print
 * @f: function called back
 * Return: pointer to name
 **/
void print_name(char *name, void (*f)(char *))
{
	void (*point)(char *);

	if (name == NULL || f == NULL)
		return;
	point = f;
	point(name);
}
