#include "main.h"
#include <stdio.h>

/**
 *  _isdigit(int c)- this function checks if its an number
 * 
 * @c - if its number return 1 else 0
 * Return: 1 if number else 0
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
