#include <stdio.h>
/*
* main
*/ int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a + b + c != 24)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;

		}
		b = a + 1;
		a++;
	}
	putchar('\n');
	return (0);
}
