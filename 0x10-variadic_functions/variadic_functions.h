#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNTIONS_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char);

#endif