#include "lists.h"

/**
* print_listint_safe - prints a safe list of int
* @head: pointer to node
* Return: number of nodes
**/
size_t print_listint_safe(const listint_t *head)
{

    const listint_t *temp = head;
	size_t lenght = 0;
int iterator = 0, list_len = 0;

	if (head == NULL)
		exit (98);
    list_len = list_lenght(head);

	while (temp != NULL)    
	{     
            printf("%d [%p] %d\n", list_len, (void *)temp, temp->n);
		    temp = temp->next;
            iterator++;
            lenght++;
            if (iterator == list_len)
    temp = NULL;            
    }      
    
return (lenght);
}

int list_lenght(const listint_t *h)
{
size_t lenght = 0;

while (h != NULL)
{lenght++;
h = h->next;
}
return (lenght);
}