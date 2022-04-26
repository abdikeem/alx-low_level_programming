#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: The list
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)

{

	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (count);
}
