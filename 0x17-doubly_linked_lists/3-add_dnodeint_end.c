#include "lists.h"
/**
 * add_dnodeint_end - add a new node to a linked list at end
 * @head: pointer to head
 * @n: data of head
 * Return: pointer to new head
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *auxiliar = *head, *end = malloc(sizeof(dlistint_t));

if (end == NULL)
return (NULL);

end->n = n;
end->next = NULL;

if (*head == NULL) /* list is empty */
{
end->prev = NULL;
*head = end; }
else
{
while (auxiliar->next != NULL) /* search last node */
{
auxiliar = auxiliar->next;
}
auxiliar->next = end; /* exchane nodes */
end->prev = auxiliar;
}
return (auxiliar);
}
