#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings.
 * @n: number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valuelist;

	va_start(valuelist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valuelist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valuelist);
}
