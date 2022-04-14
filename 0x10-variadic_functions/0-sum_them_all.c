#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters.
 * @n: number of parameters.
 * 
 * Return: sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list valuelist;
unsigned int i = 0;
int sum = 0;

if (n == 0)
return (0);

va_start(valuelist, n);

for (; i < n; i++)
sum += va_arg(valuelist, int);

va_end(valuelist);

return (sum);
}
