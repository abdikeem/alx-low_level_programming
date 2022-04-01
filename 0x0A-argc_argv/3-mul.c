#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name
 * @argc: No. of arguments passed to the program
 * @argv: array of pointers to arguments
 *
 * Return: 0 If the program receive two argument
 * else return 1 and print error
 */

int main(int argc, char *argv[])
{
int x, y, square;
if (argc < 2)
{
printf("error\n");
return (1);
}
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
square = x * y;

printf("%d\n", square);
}
return (0);
}