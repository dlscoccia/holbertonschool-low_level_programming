#include <stdio.h>
/*
* 50 firts fibonacci numbers sequence
*/ int main(void)
{
long int a = 1;
long int b = 2;
long int f = 0;
int i = 0;

printf("%li ,", a);
printf("%li ,", b);
while (i < 48)
{
	f = a + b;
	a = b;
	b = f;
	i++;
	if (i < 47)
		printf("%li, ", f);
	else
		printf("%li\n", f);
}
return (0);
}
