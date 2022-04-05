#include "main.h"

/**
 * _strdup - function returns a pointer to a new string which is a duplicate of the string str.
 * 
 * @str: duplicated string.
 * Return: NULL if str = NULL else pointer to the duplicated string.
 */

char *_strdup(char *str)
{
char *ptr;
int i, y = 0;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
ptr = malloc(sizeof(char) * (y + 1));
}
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
ptr[i] = str[i];
}
prt[y] = '\0';
return (ptr);
}
