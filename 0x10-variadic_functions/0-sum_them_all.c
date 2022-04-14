#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: amount of the arguments.
*
* Return: sum of its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valuelist;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(valuelist, n);

for (i = 0; i < n; i++)
sum += va_arg(valuelist, int);

va_end(valuelist);

return (sum);
}
