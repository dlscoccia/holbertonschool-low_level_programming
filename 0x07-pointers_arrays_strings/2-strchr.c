#include "holberton.h"
/*
* function that locates a character in a string.
*/ char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
}
return ('\0');
}
