#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: area to be filled
 * @n: number of times the charactor b will be 
 * @b: the constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;

}
return (s);
}
