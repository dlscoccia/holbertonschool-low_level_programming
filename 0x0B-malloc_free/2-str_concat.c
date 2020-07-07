#include "holberton.h"
#include <stdlib.h>
/*
 * function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */ char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *str2;

	if (s1 == '\0')
	{ j = 0; }
	else
	{
		while (s1[j] != '\0')
		{ j++; }
	}
	if (s2 == '\0')
	{ i = 0; }
	else
	{
		while (s2[i] != '\0')
		{ i++; }
	}
	str2 = malloc((j + i) * sizeof(char) + 1);
	if (str2 == '\0')
	{ return ('\0'); }

	for (k = 0; k < j; k++)
	{
		str2[k] = s1[k];
	}
	j = j + i;
	i = 0;
	for (; k < j; k++)
	{
		str2[k] = s2[i];
		i++;
	}
	str2[k] = '\0';
	return (str2);
}
