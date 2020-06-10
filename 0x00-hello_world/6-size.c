#include <stdio.h>
/*
 * main.c
 */ int main(void)
{
int integerType;
char charType;
float floatType;
long int longintType;
long long int longlongType;

printf("Size of a char: %ld\n",
sizeof(charType));

printf("Size of an int: %ld\n",
sizeof(integerType));

printf("Size of a long int: %ld\n",
sizeof(longintType));

printf("Size of a long long int: %ld\n",
sizeof(longlongType));

printf("Size of a float: %ld\n",
sizeof(floatType));

return (0);
}
