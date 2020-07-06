#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * program that adds positive numbers.
 */ int main(int argc, char *argv[])
{
	int res, i = 0;


	while (--argc)
	{
		argv++;
		for (i = 0; (*argv)[i]; i++)
		{
			if (!isdigit((*argv)[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res = res + atoi(*argv);

	}
	printf("%d\n", res);
	return (0);

}
