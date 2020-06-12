#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main function
*/ int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10; /* gets the last number */
printf("Last digit of %d is %d and is", n, m);
if (m > 5)
{printf("greater that 5\n"); }
else
{
if (m == 0)
{ printf(" 0\n"); }
else
{
printf(" less that 6 and not 0\n"); }
}
return (0);
}
