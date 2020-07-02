#include "holberton.h"

/*
 * Function that evaluates if a str is palindrome
 */ int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	return (find_pals(s, 0, len - 1));
}

/*
 * function to find lenght of a str
 */ int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	{
		s++;
		return (_strlen(s) + 1);
	}
	return (_strlen(s));
}

/*
 * function to compare str for palindrome
 */ int find_pals(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) != *(s + end))
	{
		return (0);
	}
	else
	{
		return (find_pals(s, start + 1, end - 1));
	}
}
