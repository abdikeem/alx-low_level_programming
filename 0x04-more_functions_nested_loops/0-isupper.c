#include "main.h"

/**
 * int _isupper(int)- function checks if its uppercase letter
 * @c: if Uppercase return 1 else 0 
 * Return: return 1 if uppercase else 0
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
