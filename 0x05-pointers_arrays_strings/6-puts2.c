#include "main.h"

/**
 * puts - prints every later in a string
 * 
 * @str: string pointer
 */

void puts2(char *str)
{
int i = 0;
while (str[i] != '0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
}
putchar('\n');
}
