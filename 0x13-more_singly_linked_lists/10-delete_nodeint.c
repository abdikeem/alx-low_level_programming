#include "lists.h"

/**
 * len - print all the elements of a listint_t list.
 * @h: pointer to strcutur listint_t
 * Return: the numbers of nodes
 */

unsigned int len(listint_t *h)
{
unsigned int index = 0;

if (h == '\0')
return (0);

while (h)
{
h = h->next;
index++;
}
return (index);
}

/**
 * delete_nodeint_at_index - delete a  node in an index the listint_t.
 * @head: pointer  to the strucure.
 * @index: index of listint_t list.
 * Return: 1 success, -1 fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int len_n;

len_n = len(*head);
if (head && *head && index <= len_n)
{
listint_t *siguiente;
listint_t *anterior;

if (index == 0)
{
siguiente = *head;
*head = (*head)->next;
}
else
{
unsigned int i = 0;

siguiente = *head;
while (i++ < index && (siguiente->next))
{
anterior  = siguiente;
siguiente = siguiente->next;
}
anterior->next = siguiente->next;
}
free(siguiente);
return (1);
}
else
return (-1);
}
