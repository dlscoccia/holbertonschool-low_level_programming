#include <stdio.h>
/*
* 50 firts fibonacci numbers sequence
*/ int main(void)
{
	long int a = 1;
	long int b = 2;
	long int f = 0;
	int i = 0;
	long int sum;


	sum = a + b;
	while (i < 48)
	{
		f = a + b;
		a = b;
		b = f;
		i++;
		if (f < 4000000)
		{
			sum = sum + f;
		}

	}
	printf("%li\n", sum);
	return (0);
}
