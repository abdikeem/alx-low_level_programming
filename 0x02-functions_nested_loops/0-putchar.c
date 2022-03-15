#include <stdio.h>
#include <unistd.h>

/**
*main- Print string _putchar as the output
*
*Return: 0;
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}