#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: n of arguments
 * @av: array of arguments
 * Return: char, arguments concatenated with new line
 **/
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int k = 0;
	char *str;

	if (ac == 0 || av == '\0')
		return ('\0');

	for (i = 0; i < ac ; i++)
	{
		len += _strlen(av[i]);
	}

	len = len + ac;
	str = malloc(sizeof(char) * len + 1);

	if (str == '\0')
	{ return ('\0'); }

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
/*
 * lenght of a string
 */ int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
