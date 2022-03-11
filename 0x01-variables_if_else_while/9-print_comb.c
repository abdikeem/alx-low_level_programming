#include <stdio.h>

/**
 * main - print numbers from 0 to 9 separated by commas
 *
 * Return: 0
 *
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
