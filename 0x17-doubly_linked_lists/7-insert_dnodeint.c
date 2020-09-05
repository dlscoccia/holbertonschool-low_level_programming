#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node on specifed index
 * @n: index number
 * @h: dpointer to head
 * @idx: index to insert node
 * Return: pointer to new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temporal, *auxiliar, *new = malloc(sizeof(dlistint_t));
unsigned int iterator = 0;

if ((h == NULL && idx != 0) | (new == NULL))
return (NULL);
auxiliar = *h;
new->n = n;
if (idx == 0) /* index at head */
{
if (auxiliar == NULL) /* empty list */
{
new->next = NULL;
new->prev = NULL;
return (new);
}
else /* not empy list */
{
new->next = auxiliar;
auxiliar->prev = new;
}
}
while (iterator < (idx - 1))
{
if (auxiliar == NULL)
{
free(new);
return (NULL);
}
auxiliar = auxiliar->next;
iterator++;
}
temporal = auxiliar;
auxiliar = auxiliar->next;
temporal->next = new;
new->next = auxiliar;
new->prev = temporal;
auxiliar->prev = new;
return (new);
}
