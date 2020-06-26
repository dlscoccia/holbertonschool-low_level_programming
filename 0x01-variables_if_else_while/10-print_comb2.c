#include <stdio.h>
/*
* main
*/ int main(void)
{
int a = 0;
int b = 0;

while (a <= 9)
{
	b = 0;
	while (b <= 9)
	{
		putchar('0' + a);
		putchar('0' + b);
		if (a + b != 18)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
}
putchar('\n');
return (0);
}
