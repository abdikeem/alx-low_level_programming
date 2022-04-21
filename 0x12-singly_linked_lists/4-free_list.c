#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: beginning of new list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
