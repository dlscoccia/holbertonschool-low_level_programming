#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
* program that adds positive numbers
*/ int main(int argc, char *argv[])
{
	int i, j = 0;
	int res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			j = atoi(argv[i]);
			res = res + j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
