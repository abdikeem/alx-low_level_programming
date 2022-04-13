#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: pointer to name
 * 
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
