#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * 
 * Return: 0
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