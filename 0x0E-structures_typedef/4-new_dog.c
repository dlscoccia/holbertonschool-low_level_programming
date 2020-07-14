#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - new dog struct
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: pointer to dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *pname;
	char *powner;
	int len1, len2 = 0;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	powner = malloc(sizeof(char) * len1 + 1);
	if (powner == NULL)
	{ free(p);
		return (NULL); }
	powner = _strcpy(powner, owner);
	pname = malloc(sizeof(char) * len2 + 1);

	if (pname == NULL)
	{ free(powner);
		free(p);
		return (NULL); }
	pname = _strcpy(pname, name);

	p->name = pname;
	p->age = age;
	p->owner = powner;

	return (p);
}

/*
 *copy string
 */char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/*
 * string lenght
 */ int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
