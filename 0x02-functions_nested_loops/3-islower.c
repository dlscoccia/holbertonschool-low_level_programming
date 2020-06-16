#include "holberton.h"
/*
 * check for lowercase
 */int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
