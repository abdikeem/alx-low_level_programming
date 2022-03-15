#include "main.h"

/**
 * int _islower(int c)- returns 1 if alphabet letter is in lowercase
 *  and zero if in uppercase
 * 
 * Return: 0
 */

int _islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
