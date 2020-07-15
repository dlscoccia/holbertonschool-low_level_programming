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
	void (*print_pointer)(char *);

	if (name == NULL || f == NULL)
		return;
	print_pointer = f;

	print_pointer(name);
}
