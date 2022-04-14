#include "variadic_functions.h"

/**
 * sum_them_all - sum of all param
 * @n:  number of param
 * 
 * @return sum 
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;

va_list valuelist;

va_start(valuelist, n);

while (i < n)
{
sum += va_arg(valuelist, int);
i++;
}

va_end(valuelist);
return (sum);
}
