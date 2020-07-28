#include "lists.h"
/**
* print_listint - prints a list of int
* @h: pointer to node
* Return: number of nodes
**/
size_t print_listint(const listint_t *h)
{

size_t lenght = 0;
while (h != NULL)
{
printf("%d\n", h->n);
lenght++;
h = h->next;
}
return (lenght);
}
