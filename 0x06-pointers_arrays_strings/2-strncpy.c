#include "main.h"

/**
 * strncpy - function that copies string
 * @dest: destination string
 * @src: source string
 * @n: number of charactors
 * @author: Abdihakim Abdirahman
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
