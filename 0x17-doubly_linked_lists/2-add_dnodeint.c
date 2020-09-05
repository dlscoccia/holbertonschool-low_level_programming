#include "lists.h"
/**
 * add_dnodeint - add a new node to a linked list at beggining
 * @head: pointer to head
 * @n: data of head
 * Return: pointer to new head
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));

if (temp == NULL)
return (NULL);

temp->n = n;
temp->next = *head;
temp->prev = NULL;
*head = temp;

return (temp);
}
