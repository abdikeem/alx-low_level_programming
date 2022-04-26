#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: The node at the beginning of the list
 * Return: void
 */

void free_listint(listint_t *head)

{

if (head)

{

if (head->next)

free_listint(head->next);

if (head)

free(head);

}

}
