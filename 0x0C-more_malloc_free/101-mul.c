#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _isdigit(char *c);
int _strlen(char *s);
/*
 *
 */ int main(int argc, char *argv[])
{
	int num1, num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
/*
 *if (_isdigit(argv[1]) == 0 || _isdigit(argv[2]) == 0)
 *		      {
 *			      printf("Error\n");
 *			      exit(98);
 *		      }
 */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}

/*
 * function for looking digits
 */ int _isdigit(char *c)
{
	int i, count, len = 0;

	len = _strlen(c);
	while (c[i] != '\0')
	{
		if (c[i] >= '0' && c[i] <= '9')
		{ count++; }
		i++;
	}
	if (count == len)
		return (1);
	else
		return (0);
}

#include "holberton.h"
/*
 * counts chars on a string
 */ int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
