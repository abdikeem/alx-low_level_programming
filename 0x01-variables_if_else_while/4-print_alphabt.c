#include <stdio.h>
#include <stdlib.h>

/**
 *main - print lowercase letters in alphabet except q and e
 *
 *Return: 0
 */

int main(void)
{

	int i;

	for (i = 1; i <= 26; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
