#include "main.h"

/**
 * int print_last_digit(int)- print last digit of number
 * 
 *
 * @c - i % 10 gives the reminder of any number greater than 10
 * Return: 0
 */

int print_last_digit(int i)
{
int last_digit;
while (i >= 10)
/* code */
last_digit = i % 10;
_putchar(last_digit);
return(0);
}
