#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
unsigned long mul1;
int num1, num2;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (num1 = 1; num1 < argc; num1++)
{
for (num2 = 0; argv[num1][num2] != '\0'; num2++)
{
if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul1 = atol(argv[1]) *  atol(argv[2]);
printf("%lu\n", mul1);
return (0);
}
