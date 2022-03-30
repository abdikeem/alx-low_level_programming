#include "main.h"

/**
 * factorial - returns fuctorial of given number
 * @n: factorial number
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return n * factorial(n - 1);
}
