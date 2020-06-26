#include "holberton.h"
/*
*leet
*/ char *leet(char *s)
{
	char in[11] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char out[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (in[j] != '\0')
		{
			if (in[j] == s[i])
			{
				s[i] = out[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
