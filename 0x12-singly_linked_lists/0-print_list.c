#include "lists.h"

/**
 * print_list - prtints a list
 * @h: pointer to list
 * Return: size of the list
 **/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
