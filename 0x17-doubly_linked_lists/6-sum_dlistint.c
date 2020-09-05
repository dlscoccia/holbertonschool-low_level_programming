#include "lists.h"
/**
 * sum_dlistint - sum all the values on a linked list
 * @head: pointer to head
 * Return: result of the sum
 **/
int sum_dlistint(dlistint_t *head)
{
int result = 0;

while (head != NULL)
{
result += head->n;
head = head->next;
}

return (result);
}
