#include <stdio.h>
#include <stdlib.h>
/*
* Function that multiplie
*/ int main(int argc __attribute__((unused)), char *argv[])
{
	int x, y = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
