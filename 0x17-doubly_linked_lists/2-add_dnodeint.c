#include "lists.h"
/**
 * add_dnodeint - add a new node to a linked list at beggining
 * @head: pointer to head
 * @n: data of head
 * Return: pointer to new head
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *auxiliar = malloc(sizeof(dlistint_t));

if (auxiliar == NULL)
return (NULL);

auxiliar->n = n;
auxiliar->next = *head;
auxiliar->prev = NULL;
*head = auxiliar;

return (auxiliar);
}
