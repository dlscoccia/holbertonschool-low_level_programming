#include "lists.h"

/**
* listint_len - calculates lenght of the list
* @h: head pointer
* Return: number of nodes
**/
size_t listint_len(const listint_t *h)
{
size_t lenght = 0;

while (h != NULL)
{lenght++;
h = h->next;
}
return (lenght);
}
