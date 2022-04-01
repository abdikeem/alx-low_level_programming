#include "main.h"

/**
 * _strncat - concantinates two string
 * @dest: destination string
 * @src: source string
 * @n: No. of charactors to be appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
if (src[j] == '\0')
break;
i++;
j++;
}
return (dest);
}
