#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
    int i = 0, n;

if (i % 2 == 1)
i = n / 2;
else
i = (i - 1) / 2;

for (i = 0; i < n; i++)
{
    putchar(str[i]);
}
putchar('\n');
}