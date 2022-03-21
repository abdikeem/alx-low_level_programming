#include "main.h"

/**
 * print_rev - prints the charactor string
 * @s:  pointer to be printed
 */

void print_rev(char *s);
{
int i;
for (i = 0; s[i] != '\0'; ++i)
while(i--)
{
putchar(s[i]);
}
putchar('\n');
}
