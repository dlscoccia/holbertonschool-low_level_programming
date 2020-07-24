#include "lists.h"
/**
 * add_node - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: Pointer to the head of the linked list
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		new_node->str = strdup(str);
		new_node->len = i;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
