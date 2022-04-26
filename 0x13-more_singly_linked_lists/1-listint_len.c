#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked listint_t list
 * @h: The linked list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)

{

size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = (*h).next;
	}
	return (count);
}
