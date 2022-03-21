#include "main.h"

/**
 * print_rev - prints the charactor string
 * @s:  pointer to be printed
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while(i--)
{
putchar(s[i]);
}
putchar('\n');
}
