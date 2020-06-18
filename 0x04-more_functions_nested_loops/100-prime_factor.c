#include "holberton.h"
/*
 * prime factor calculator
 */int main(void)
{
	int a;
	long int num;
	int b;

	a = 2;
	b = 0;
	num = 612852475143;
	while (a <= num)
	{
		if (num % a == 0)
		{
			num = num / a;
			b = a;
		}
		a++;
	}

	printf("%d\n", b);
	return (0);
}
