#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the heads of nodes
 * @head: the node at the beginning of the list
 * Return: the contents of the head, otherwise 0
 */

int pop_listint(listint_t **head)

{

int val = 0;

listint_t *node;

if (head && *head)

{

node = *head;

val = node->n;
										*head = (*head)->next;
										free(node);
										}

return (val);

}
