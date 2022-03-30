#include "main.h"

/**
 * _strlen_recursion - function that return len of string
 * @s: string
 * Return: len
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
