#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with separation.
 * 
 * @separator: number separator.
 * @n: number of parameters.
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int num;
va_list valuelist;

va_start(valuelist, n);
for (; i < n; i++)
{
    num = va_arg(valuelist, int);
    printf("%d", num);
    if (i != n - 1 && separator != NULL)
        printf("%s", separator);
}
va_end(valuelist);
printf('\n');
}
