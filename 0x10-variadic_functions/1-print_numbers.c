#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with a separator.
 * 
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list nl;

	va_start(nl, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(nl, int), (separator && i != n - 1) ? separator : "");
	va_end(nl);
	printf("\n");


}
