#include "lists.h"
/**
 * get_dnodeint_at_index - get the data of node at specified index
 * @head: pointer to head
 * @index: index for node to get data
 * Return: pointer to node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

dlistint_t *node_index = head;
unsigned int iterator = 0;

if (head == NULL)
return (NULL);

while (iterator != index)
{
node_index = node_index->next;
iterator += 1;
if (node_index == NULL)
return (NULL);
}
return (node_index);
}
