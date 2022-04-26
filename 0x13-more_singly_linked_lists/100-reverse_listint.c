#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the node at the beginning of the list
 * Return: the pointer to the first node of the reverse list, otherwise Null
 */

listint_t *reverse_listint(listint_t  **head)

{

void *next;
void *prev = NULL;

if (head && *head)

{

while (((*head)->next) != NULL)

{
										next = (*head)->next;
										(*head)->next = prev;
										prev = *head;
										*head = next;

}

(*head)->next = (listint_t *)prev;

}

return (*head);

}
