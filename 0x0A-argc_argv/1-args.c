#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: No. of arguments passed to the program
 * @argv: array of pointers to arguments
 *
 * Return: 0.
 */

int main(int argc, char* argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", i, argv[i]);
}
return (0);
}
