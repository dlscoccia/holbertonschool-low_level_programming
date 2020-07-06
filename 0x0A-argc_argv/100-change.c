#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * prints the minimum number of coins to give change
 */ int main(int argc, char *argv[])
{
	int coin, cents;

	cents = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (coin % 25 >= 0)
	{
		cents += coin / 25;
		coin = coin % 25;
	}
	if (coin % 10 >= 0)
	{
		cents += coin / 10;
		coin = coin % 10;
	}
	if (coin % 5 >= 0)
	{
		cents += coin / 5;
		coin = coin % 5;
	}
	if (coin % 2 >= 0)
	{
		cents += coin / 2;
		coin = coin % 2;
	}
	if (coin % 1 >= 0)
	{
		cents += coin / 1;
	}
	printf("%d\n", cents);
	return (0);
}
