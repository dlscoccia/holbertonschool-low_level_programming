#include "holberton.h"
/*
 * compares strings
 */ int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;

while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}
if (i == j)
	return (0);
if (i < j)
	return (-15);
else
	return (15);
}
