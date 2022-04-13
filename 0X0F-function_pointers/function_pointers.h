#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif  //FUNCTION_POINTERS_