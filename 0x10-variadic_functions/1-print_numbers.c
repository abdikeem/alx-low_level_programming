#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with a separator.
 * 
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valuelist;
unsigned int i;
int numbers;

va_start(valuelist, n);

for (i = 0; i < n; i++)
{   
numbers = va_arg(valuelist, int);
printf("%i", numbers);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(valuelist);

putchar('\n');
}
