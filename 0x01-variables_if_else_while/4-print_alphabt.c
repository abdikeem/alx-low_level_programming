#include <stdio.h>
#include <stdlib.h>

/**
 *main - print lowercase letters in alphabet except q and e
 *
 *Return: 0
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (i <= 26)
	{
		if (i == 5 && i ==17)
		{
			putchar(i);
		}
	}
	putchar("\n");
	return (0);
}
