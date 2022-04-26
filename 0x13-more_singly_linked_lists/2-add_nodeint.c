#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: the node at the beginning of the list
 * @n: the value to be contained in the new node
 * Return: the pointer to the new node, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

unsigned int size;

listint_t *new_node;

if (head)

{

size = sizeof(listint_t);

new_node = malloc(size);

if (new_node)
{
																	new_node->n = n;
																	new_node->next = *head;
																	*head = new_node;
																	}

}

return (new_node);

}
