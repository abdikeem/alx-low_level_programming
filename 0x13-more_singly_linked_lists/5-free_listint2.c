#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the node at the beginning of the list
 * Return: void
 */

void free_listint2(listint_t **head)

{

listint_t *temp;

if (head == NULL)

return;

if (*head == NULL)

return;

while (*head != NULL)

{

temp = *head;

*head = (*head)->next;

free(temp);

}

*head = NULL;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;

}
