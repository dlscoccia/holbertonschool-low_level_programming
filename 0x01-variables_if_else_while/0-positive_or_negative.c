#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 *main function is
*/ int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d", n);
if (n == 0)
{puts(" is 0"); }
if (n < 0)
{puts(" is negative"); }
if (n > 0)
{puts(" is positive"); }
return (0);
}
