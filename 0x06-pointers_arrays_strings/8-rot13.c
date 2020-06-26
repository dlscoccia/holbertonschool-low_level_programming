#include "holberton.h"
/*
 * rot13
 */ char *rot13(char *s)
{
	char in[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
       char out[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	 int i = 0;
	 int j = 0;

	 while (s[i] != '\0')
	 {
		 j = 0;
		 while (in[j] != '\0')
		 {
			 if (in[j] == s[i])
			 {
				 s[i] = out[j];
			 }
			 j++;
		 }
		 i++;
	 }
	 return (s);
}
