#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 * 
 * @return addition of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
int add = 0;
unsigned int i = 0;

va_list valuelist;

va_start(valuelist, n);
for (; i < n; i++)
add += va_arg(valuelist, int);
va_end(valuelist);
return (add);
}
