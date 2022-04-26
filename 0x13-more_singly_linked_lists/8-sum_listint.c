#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - computes the sum of all data of a listint_t linked list
 * @head: the node at the begninng of the list
 * Return: the sum of the data in each node of the given list, otherwise 0
 */

int sum_listint(listint_t *head)

{

int sum = 0;

listint_t *node = head;

while (node)

{

sum += node->n;

node = node->next;
										}

return (sum);

}
