#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: pointer to the first node of a linked list.
 * @str: String to include in the node.
 * Return: A pointer to the head of the linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;
	int i;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{ }
	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
