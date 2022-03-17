#include <stdio.h>
#include "main.h"

/**
 * _isupper- function checks if its uppercase letter
 * @c: if statement
 * Return: return 1 if uppercase else 0
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
