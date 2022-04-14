#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with separation.
 * 
 * @separator: number separator.
 * @n: number of parameters.
 * 
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int number;
va_list valuelist;

va_start(valuelist, n);
for (; i < n; i++)
{
    number = va_arg(valuelist, int);
    printf("%i", number);
    if (i < n - 1 && separator)
        printf("%s", separator);
}
printf("\n");
va_end(valuelist);
}
