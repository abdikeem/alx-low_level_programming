#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name
 * @argc: No. of arguments passed to the program
 * @argv: array of pointers to arguments
 * 
 * Return: 0 if argc less than 2 else 1
 */

int main(int argc, char *argv[])
{
int x, y, mult;

if (argc < 2)
{
printf("error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
mult = x * y;
printf("%d\n", mult);
return (0);
}
