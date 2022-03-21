#include "main.h"

/**
 * puts - prints every later in a string
 * 
 * @str: string pointer
 */

void puts2(char *str)
{
int i;
for (i = 0; i >= 0; i++)
{
if (i % 2 == 0)
putchar(str[i]);
else
putchar('\n');
}
}
