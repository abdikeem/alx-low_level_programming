#include "main.h"
/**
 *print_alphabet - print the alphabet
 * followed by a new line
 * Descrition: print the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		_putchar(lower_alphabet);
	}
	_putchar('\n');

}
