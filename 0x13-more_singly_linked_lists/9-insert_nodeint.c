#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at index position
 * @head: pointer to pointer of head
 * @idx: index number
 * @n: value for n struct
 * Return: address of new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *last_node = *head;
unsigned int iterator;

if (head == NULL) /* checking for null list */
return (NULL);

new_node = malloc(sizeof(listint_t)); /* allocating memory for new_node */
if (new_node == NULL) /* checking allocation */
return (NULL);

if (n == '\0') /* checking for n value to assign */
new_node->n = 0;
else
new_node->n = n;

for (iterator = 0; last_node != NULL; iterator++) /* iterates the list */
{
if (iterator == (idx - 1)) /* checking matches */
{
new_node->next = last_node->next;
last_node->next = new_node;
return (new_node);
}
else
last_node = last_node->next;
}
return (NULL);
}
