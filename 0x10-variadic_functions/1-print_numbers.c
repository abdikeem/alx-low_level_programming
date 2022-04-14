#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with separation.
 * 
 * @separator: number separator.
 * @n: number of parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list valuelist;

va_start(valuelist, n);
for (i = 0; i < n; i++)
{
    num = va_arg(valuelist, int);
    printf("%d", num);
    if (i < n - 1 && separator)
        printf("%s", separator);
}
printf('\n');
va_end(valuelist);
}
