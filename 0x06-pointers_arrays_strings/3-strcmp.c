#include "main.h"

/**
 * _strcmp - function that compares two string
 * Return: 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (j == 0)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
break;
j = s1[i] - s2[i];
i++;
}
return (j);
}
}
