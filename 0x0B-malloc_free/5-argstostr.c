#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: n of arguments
 * @av: array of arguments
 * Return: char, arguments concatenated
 **/
char *argstostr(int ac, char **av)
{
	int i, j, k, lenght = 0;
	char *str;

	if (ac == 0 || av == '\0')
	{ return ('\0'); }

	for (i = 0; i < ac; i++)
	{
		lenght += _strlen(av[i]);
	}
	lenght = lenght + ac;
	str = malloc(sizeof(char) * lenght + 1);

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
 * counts chars on a string
 */ int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
