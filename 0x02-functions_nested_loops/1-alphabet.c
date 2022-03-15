#include "main.h"
/**
 *print_alphabet - print the alphabet
 * followed by a new line
 * Descrition: print the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char lower_case_alphabet;

	for (lower_case_alphabet = 'a'; lower_case_alphabet <= 'z'; lower_case_alphabet++)
	{
		_putchar(lower_case_alphabet);
	}
	_putchar('\n');

}
