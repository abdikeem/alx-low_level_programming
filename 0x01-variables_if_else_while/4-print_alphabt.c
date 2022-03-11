#include <stdio.h>
#include <stdlib.h>

/**
 *main - print lowercase letters in alphabet except q and e
 *
 *Return: 0
 */

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(alphabets[i]);
		}
	}
	putchar('\n');
	return (0);
}
