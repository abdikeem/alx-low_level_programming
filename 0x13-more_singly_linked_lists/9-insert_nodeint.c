#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_inddex - inserts a node at a given index
 * @head: the node at the beginning of the list
 * @idx: the index at which to insert the node
 * @n: the content of the inserted node
 * Return: the pointer to the node, otherwise Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

unsigned int i;
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if ((idx == 0 && *head == NULL) || idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
