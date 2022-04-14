#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNTIONS_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - print type with corresponding print function
 * @type: type
 * @x: function
 */
typedef struct printTypex
{
	char *type;
	void (*x)(va_list);
} printTypex;

#endif /* VARIADIC_FUNCTIONS_H_ */