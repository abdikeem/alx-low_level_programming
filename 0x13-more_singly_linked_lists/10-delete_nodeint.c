#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deletes a nodes at a given index
 * @head: the node at the beginning of the list
 * @index: the index of the node to delete
 * Return: 1 if the deletion was successful, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

unsigned int i;

	listint_t *node;

		listint_t *prev;



			if (head && *head)

					{

			prev = NULL;

										for (i = 0; i <= index; i++)

													{

												if (i > 0 && !prev)

																						break;

																				if (i == index)

																						{

																						if (prev && prev->next)

																															{

																																								node = prev->next;

																																									prev->next = prev->next->next;

																																																		free(node);
																																																		return (1);

																																																											}

																																	if (!prev)

																																						{

																																												node = *head;

																																																	*head = node->next;

																																																						free(node);

																																																											return (1);

																																																															}

																																				}

																							prev = i == 0 ? *head : prev->next;

																									}

											}

				return (-1);

}

