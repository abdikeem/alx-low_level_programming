#include "main.h"

/**
 * _isupper- function that prints number 0 - 9
 * @c: for loop
 * Return: return 0
 */

void print_numbers(void)
{
    char i;
    
    for (i = 48; i <= 57; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
    return (0);
}
