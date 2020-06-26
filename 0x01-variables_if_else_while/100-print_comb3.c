#include <stdio.h>
/*
* main
*/ int main(void)
{
int a = 0;
int b = 1;

while (a <= 9)
{
	while (b <= 9)
	{
		putchar('0' + a);
		putchar('0' + b);
		if (a + b != 17)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
	b = a + 1;
}
putchar('\n');
return (0);
}
