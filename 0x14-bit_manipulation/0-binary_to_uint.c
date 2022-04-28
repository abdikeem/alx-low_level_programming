#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		val = val << 1;
		if (b[i] == '1')
		{
			val += 1;
		}
	}
	return (val);
}
