#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: 0
 */
int main(void)
{
	int i, n, k;

	i = 48;
	n = 48;
	k = 48;

	while (n < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (n != i && n != k && i != k && n < i && i < k)
				{
					putchar(n);
					putchar(i);
					putchar(k);
					if (i == 56 && n == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
