#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: No. of arguments passed to the program
 * @argv: array of pointers to arguments
 *
 * Return: 0.
 */

int main(int argc, __attribute__((__unused__)) char* argv[])
{
printf("%d\n", argc - 1);
return (0);
}
