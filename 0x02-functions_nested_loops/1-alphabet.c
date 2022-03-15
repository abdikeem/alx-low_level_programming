#include <stdio.h>

/**
 *alphabet - prints alphabets in lowercase
 * 
 *Return: 0
 */

void print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        /* code */
        _putchar(i);
    }
    _putchar('\n');
    
}