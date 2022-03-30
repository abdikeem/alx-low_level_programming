#include "main.h"

/**
 * sqr - returns the natural square root of a number.
 * @n: input number.
 * @y: number of iterator.
 * Return: square root or -1.
 */

int sqr(int n, int y)
{
if (y % (n / y) == 0)
{
if (y * (n / y) == n)
return (y);
else
return (-1);
}
return (0 + sqr(n, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:number
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
    return (-1);
else if (n == 0)
    return (0);
else if (n == 1)
    return (1);
return (sqr(n, 2));
}
