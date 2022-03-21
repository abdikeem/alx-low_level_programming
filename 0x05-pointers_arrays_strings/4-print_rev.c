#include "main.h"

/**
 * _puts - prints the charactor string
 * @str:  pointer to be printed
 */

void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
while(i--)
{
putchar(s[i]);
}
putchar('\n');
}
