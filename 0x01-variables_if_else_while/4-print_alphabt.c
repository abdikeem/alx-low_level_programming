#include <stdio.h>
#include <stdlib.h>

/**
 *main - print lowercase letters in alphabet except q and e
 *
 *Return: 0
 */

int main(void)
{
	char alphabets = "abcdefghijklmnopqrstuvwxyz";


	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
	}
	putchar('\n');
	return (0);
}
