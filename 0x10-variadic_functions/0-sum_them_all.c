#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters.
 * @n: number of parameters.
 * 
 * Return: addition of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
int add = 0;
unsigned int i = 0;

va_list valuelist;

if (n == 0)
return (0);

va_start(valuelist, n);

while (i < n)
{
add += va_arg(valuelist, int);
i++;
}
va_end(valuelist);
return (add);
}
