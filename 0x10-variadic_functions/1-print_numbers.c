#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with separation.
 * 
 * @separator: number separator.
 * @n: number of parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list list;

va_start(list,n);

for (; i < n; i++)
{
printf("%i", va_arg(list, int));
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(list);
_putchar('\n');
}
