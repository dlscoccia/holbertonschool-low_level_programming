#include "holberton.h"
/*
* function to count every minute
*/ void jack_bauer(void)
{
int h;
int m;
int d;
h = 0;
while (h < 24)
{
m = 0;
while (m < 60)
{
d = h / 10;
_putchar('0' + d);
d = h % 10;
_putchar('0' + d);
_putchar(':');
d = m / 10;
_putchar('0' + d);
d = m % 10;
_putchar('0' + d);
_putchar('\n');
m++;
}
h++;
}
}
