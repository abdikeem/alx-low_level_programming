#include "main.h"
/**
 *print_alphabet*10 - print the lowercase alphabets ten times 
 * 
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lower_alphabet;
    int i = 0;
    while (i < 10)
    {
        for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
        {
            _putchar(lower_alphabet);
        }
        i++;
        _putchar('\n');
    }

}
