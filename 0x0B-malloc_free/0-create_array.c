#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the i with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
char *i;
unsigned int y;

if (size == 0)
return (NULL);

i = malloc(sizeof(char) * size);

if (i == NULL)
return (NULL);

for (y = 0; y < size; y++)
i[y] = c;

return (i);
}
