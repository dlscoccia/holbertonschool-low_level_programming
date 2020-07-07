#include "holberton.h"
#include <stdlib.h>
/*
 * function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */ char *_strdup(char *str)
{
	char *str2;
	int i, j = 0;

	if (str == '\0')
	{ return ('\0'); }

	while (str[j] != '\0')
	{ j++; }

	str2 = malloc(j * sizeof(char) + 1);

	if (str2 == '\0')
	{ return ('\0'); }

	for (i = 0 ; i < j; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);
}
