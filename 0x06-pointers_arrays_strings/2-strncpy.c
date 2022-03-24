#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of charactors
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
/* code */
dest[i] = src[i];
i++;

}
while (i < n)
{
/* code */
dest[i] = '\0';
i++;
}

return (dest);
}
