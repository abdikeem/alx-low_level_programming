#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters.
* @n: amount of the arguments.
*
* Return: sum of its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;

va_list valuelist;

if (n == 0)
return (0);

va_start(valuelist, n);
i = 0;
for (;i < n; i++)
sum += va_arg(valuelist, int);

va_end(valuelist);

return (sum);
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
