#include "holberton.h"
/*
 * Function that prints 1 is n is prime
 * 0 is not prime
*/ int is_prime_number(int n)
{
int k;

k = n / 2;
if (n <= 1)
	return (0);
else
	return (checkprime(n, k));
}

/*
 * function to check is n given is prime
 */ int checkprime(int n, int k)
{
	int i = 1;

	if (k == 1)
	{ i = 1; }
	else if (n % k == 0)
	{ i = 0; }
	else
	{	checkprime(n, k - 1); }
	return (i);
}
