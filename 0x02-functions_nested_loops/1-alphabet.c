#include "main.h"
/**
 *print_alphabet - print the alphabet
 * followed by a new line
 * Descrition: print the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
