#include "holberton.h"
#include <stdlib.h>
/*
* @create_array: function that creates a string initialized with a char
* @size: size of the string
* @c: char to use on the string
* @return: string initialized with c
*/ char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *letra;

	letra = malloc(sizeof(char) * size);
	for (; i <= size; i++)
	{
		letra[i] = c;
	}
	return (letra);
}
