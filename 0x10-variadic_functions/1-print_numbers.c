#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with separation.
 * 
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int number;
va_list valuelist;

va_start(valuelist, n);
for (i = 0; i < n; i++)
{
number = va_arg(valuelist, int);
printf("%d", number);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valuelist);
}
