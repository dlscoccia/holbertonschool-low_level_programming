#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @idx: index to insert at
 * @h: head of dlistint_t
 * @n: number for new node
 * Return: Returns address to the new dnodeint, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *auxiliar = *h, *new = malloc(sizeof(dlistint_t)), *temporal;
	unsigned int iterator;

	if ((h == NULL && idx != 0) | (new == NULL))
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (auxiliar != NULL)
		{
			new->next = auxiliar;
			auxiliar->prev = new;
		}
		else
			new->next = NULL;
		new->prev = NULL;
*h = new;
		return (*h);
	}
	for (iterator = 0; iterator < (idx - 1);
iterator++)
	{
		if (auxiliar == NULL)
		{
			free(new);
return (NULL);
		}
		auxiliar = auxiliar->next;
	}
	if (auxiliar == NULL)
	{
		free(new);
return (NULL);
	}
	temporal = auxiliar;
	auxiliar = auxiliar->next;
	temporal->next = new;
	new->next = auxiliar;
	new->prev = temporal;
	return (new);
}
