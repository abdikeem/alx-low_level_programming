#include "main.h"
/**
 *string_toupper - changes all lowercase to uppercase of a string.
 *@k: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *k)
{
	int i;

	i = 0;

	while (k[i] != '\0')
	{
		if (k[i] >= 97 && k[i] <= 122)
		{
			k[i] = k[i] - 32;
		}
		i++;
	}
	return (k);
}
