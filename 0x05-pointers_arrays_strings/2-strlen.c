#include "holberton.h"
/*
 * counts chars on a string
 */ int _strlen(char *s)
{
int a;
int NULL = NULL;

a = 0;
while (*s != NULL)
{
a++;
s++;
}
return (a);
}
