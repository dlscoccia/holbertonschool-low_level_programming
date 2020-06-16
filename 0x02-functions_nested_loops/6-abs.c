#include "holberton.h"
/*
* absolute value of n
*/ int _abs(int r)
{
if (r < 0)
{
r = r * -1;
_putchar(r); }
if (r > 0)
{r = r;
_putchar(r); }
if (r == 0)
{r = 0;
_putchar(r); }
return (r);
}
