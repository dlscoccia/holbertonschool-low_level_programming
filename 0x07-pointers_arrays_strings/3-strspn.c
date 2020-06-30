#include "holberton.h"
/*
*  function that gets the length of a prefix substring.
*/ unsigned int _strspn(char *s, char *accept)
{
int i, j, x = 0;

while (s[i] != '\0' && x == i)
{
	j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			x++;
		}
		j++;
	}
	i++;
}
return (x);
}
