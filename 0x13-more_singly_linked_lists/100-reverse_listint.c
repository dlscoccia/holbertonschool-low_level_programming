#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to head
 * Return: pointer to the head of reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *new_list, *temp;

new_list = NULL;

		while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new_list;
		new_list = (*head);
		(*head) = temp;
	}
	(*head) = new_list;
	return (*head);
}
