#include "lists.h"

/**
 * list_size - funtion for length elemnt
 * @h: single list in
 * Return: number of elemt in the linked lis
 */

int list_size(listint_t **h)
{
	listint_t *auxiliar;
	int i = 0;

	auxiliar = *h;
	while (auxiliar != NULL)
	{
		i++;
		auxiliar = auxiliar->next;
	}
	return (i);
}

/**
 * insert_nodeint_at_index - insert new node in the index possition
 * @head: linked list
 * @idx: index, it start in 0
 * @n: data for new node
 * Return: Always addres new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int iterator = 0;
unsigned int lenght = list_size(head);
listint_t *auxiliar = *head;
listint_t *new_node = NULL;

if (head == NULL || idx > lenght)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

	new_node->n = n; /* assing n(arg) to n(node) */
	if (idx == 0) /* insert node at beggining */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* inserting at index */
	while (auxiliar != NULL) /* iterates the list to find node(idx)*/
	{
		if (iterator == (idx - 1)) /* If matches, insert new node*/
		{
			new_node->next = auxiliar->next; /* new points to next of idx */
			auxiliar->next = new_node; /* previous node points to new */
			return (new_node); /*return address of new node allocated */
		} /*                auxiliar -> new_node -> auxiliar next           */
		auxiliar = auxiliar->next; /* If not match, move auxiliar */
		iterator++;
	}
	return (NULL);
}
