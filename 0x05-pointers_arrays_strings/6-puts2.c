#include "main.h"
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != 0)
{
	if (i % 2 == 0)
	{
		putchar(str[i]);
	}

	i++;
}
putchar('\n');
}
