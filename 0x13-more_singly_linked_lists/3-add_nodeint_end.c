#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listintT list
 * @head: the node at the beginning of the list
 * @n: the value to be contained in the new node
 * Return: the pointer to the new node, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

listint_t *tail;

listint_t *new_node;

tail = head ? *head : NULL;

while (tail && tail->next != NULL)

tail = tail->next;

new_node = malloc(sizeof(listint_t));

if (new_node)

{

new_node->n = n;

new_node->next = NULL;

if (tail)
																	tail->next = new_node;

if (*head == NULL)
																	*head = new_node;
																	}

return (new_node);

}
