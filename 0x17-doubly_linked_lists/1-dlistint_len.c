#include "lists.h"
/**
 * dlistint_len - function to get lenght of a linked list
 * @h: pointer to linked list
 * Return: lenght of the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
size_t lenght = 0;

while (h != NULL)
{
lenght += 1;
h = h->next;
}
return (lenght);
}
