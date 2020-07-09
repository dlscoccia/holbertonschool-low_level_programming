#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concatenate of string 2 on string 1
 * Return: pointer to newly allocated memory slot
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcon;
	int i, len1;
	unsigned int j, len2;

	len1 = _strlen(s1); /* string1 length */
	len2 = _strlen(s2); /* string2 length */

	if (n >= len2)
	{n = len2; } /* condition to copy entire s2 */

	strcon = malloc((len1 + n) * sizeof(char) + 1);
	if (strcon == NULL)
	{ free (strcon);
		return (NULL); }

	for (i = 0; i < len1; i++) /* copy s1 to new string strcon */
	{
		strcon[i] = s1[i];
	}

	for (j = 0; j < n; j++) /* copy n bytes from s2 to strcon */
	{
		strcon[i] = s2[j];
		i++;
	}
	strcon[i] = '\0'; /* null terminated strcon */
	return (strcon);
}

/*
 * string lenght function
 */ int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
