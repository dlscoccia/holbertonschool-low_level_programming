#include "holberton.h"
/*
 * capitalaze every word of a string
 */ char *cap_string(char *p)
{
int i = 0;

while (p[i] != '\0')
{
	if ((p[i + 1] >= 'a' && p[i + 1] <= 'z') && (p[i] == ' '))
	{
		p[i + 1] = p[i + 1] - 32;
	}
	if ((p[i + 1] >= 'a' && p[i + 1] <= 'z') && (p[i] == '\t'))
	{
		p[i] = ' ';
		p[i + 1] = p[i + 1] - 32;
	}
	if ((p[i + 1] >= 'a' && p[i + 1] <= 'z') && (p[i] == '\n'))
	{
		p[i + 1] = p[i + 1] - 32;
	}
	if ((p[i + 1] >= 'a' && p[i + 1] <= 'z') && (p[i] == '.'))
	{
		p[i + 1] = p[i + 1] - 32;
	}
	i++;
}
return (p);
}
