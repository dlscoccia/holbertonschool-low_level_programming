#include "holberton.h"
/*
* function that gets the length of a prefix substring.
*/ unsigned int _strspn(char *s, char *accept)
{
	unsigned int  x = 0, y = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				x++;
				break;
			}
		}
		if (x == y)
			break;
		y = x;

	}
	return (x);

}
