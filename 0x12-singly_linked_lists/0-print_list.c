#include "lists.h"

/**
 * print_list - prtints a list
 * @h: pointer to list
 * Return: size of the list
 **/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("[%d]", h->len);
		if (h->str != NULL)
			printf(" %s\n", h->str);
		else
			printf(" (nil)\n");
		h = h->next;
		len++;
	}
	return (len);
}
