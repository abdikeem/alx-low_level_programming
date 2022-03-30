#include "main.h"

/**
 * _strlen_recursion - function that return len of string
 * @s: string
 * Return: len
 */

int _strlen_recursion(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
