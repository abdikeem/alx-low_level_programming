#include <stdio.h>

/**
 *main - print both lowercase and uppercase letters in alphabet
 *
 *Return: 0
 */

int main(void)
{
	char alpabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
