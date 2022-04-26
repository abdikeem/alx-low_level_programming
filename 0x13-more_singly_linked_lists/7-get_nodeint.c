#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the given index
 * @head: the node at the beginning of the list
 * @index: the index of the node to retrieve
 * Return: the pointer to the node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

unsigned int i;

listint_t *node = head;

for (i = 0; node && i <= index; i++)

{

if (i == index)

return (node);

node = node->next;
}
return (NULL);	
}
