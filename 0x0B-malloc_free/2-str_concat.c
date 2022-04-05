#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, y = 0, length = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
length++;

concat_str = malloc(sizeof(char) * length);

if (concat_str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
concat_str[y++] = s1[i];

for (i = 0; s2[i]; i++)
concat_str[y++] = s2[i];

return (concat_str);
}
