#include "main.h"

/**
 * _strcmp - function that compares two string
 * Return: 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0' || s2[i] == '\0')
{
    break;
i++;
}
if (s1[i] == '\0' && s2[i] == '\n')
return (0);
else
return (-1);
}
}
