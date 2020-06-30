#include "holberton.h"
/*
*  function that gets the length of a prefix substring.
*/ unsigned int _strspn(char *s, char *accept)
{
int i, l = 0;
unsigned int x = 0;

while (s[i] != ' ' && s[i] != '\0')
{
	l = 0;
	while (accept[l] != '\0')
	{
		if (accept[l] == s[i])
		{
			x++;
		}
		l++;
	}
	i++;
}
return (x);
}
