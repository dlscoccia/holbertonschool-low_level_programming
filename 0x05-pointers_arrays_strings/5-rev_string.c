#include "holberton.h"
/*
 * aakaa
 */ void rev_string(char *s)
{
	 char *t;
	 char c;
	 int len = 0;

while (s[len] != '\0')
{
len++;
}
t = s + len - 1;
while (s < t)
{
c = *s;
*s = *t;
*t = c;
s++;
t--;
}
}
