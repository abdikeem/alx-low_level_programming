#include "main.h"

/**
 * _isupper- function that prints number 0 - 9
 * @c: without 2 and 4
 * Return: return 0
 */

void print_most_numbers(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        if ( i != 2 && i != 4)
        {
            _putchar(i);
        }
    }
    _putchar('\n');
}
