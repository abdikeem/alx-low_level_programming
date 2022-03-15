#include "main.h"
/**
 * _islower - checks for lowercase character
 * 
 * @c: the character to check
 * 
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
