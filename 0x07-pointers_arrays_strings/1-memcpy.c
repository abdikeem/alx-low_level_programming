#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
