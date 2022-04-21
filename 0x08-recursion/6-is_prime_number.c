#include "main.h"

/**
 * prime - detects prime number
 * @n: input number
 * @y: iterator
 * Return: 1 if n is a prime number. 0 if not a prime number.
 */
int prime(int n, int y)
{
if (n % y == 0)
{
if (n == y)
return (1);
else
return (0);
}
return (0 + prime(n, y + 1));
}

/**
 * is_prime_number - return 1 if the input integer is a prime number
 * @n: inout number
 * Return: 0
 */

int is_prime_number(int n)
{
if (n == 0)
{
return (0);
}
else if (n < 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
return (prime(n, 2));
}
