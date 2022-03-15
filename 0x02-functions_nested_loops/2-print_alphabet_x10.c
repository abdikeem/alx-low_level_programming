#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase,
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lower_case;
	int i;

	i = 0;

	while (i < 10)
	{
		lower_case = 'a';
		while (lower_case <= 'z')
		{
			_putchar(lower_case);
			lower_case++;
		}
		_putchar('\n');
		i++;
	}
}