#include "main.h"
#include <stdio.h>

/**
 * int _isupper(int c) - checks the code and prints upper case letters.
 *@c: if statement.
 *
 * Return: 1 when is uppercase and 0 when is lowercase.
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
