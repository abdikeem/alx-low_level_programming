#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
}
