#include <unistd.h>

/**
 * main - variable char named var_text
 * prints 2, { varible we declaired before }, 59
 * Return: 1
 */

int main(void)
{
	char var_text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, var_text, 59);
	return (1);
}
