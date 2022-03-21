#include "main.h"
/**
 * rev_string - reverses a string
 * @author: Abdihakim Abdirahman
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char rev;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		rev = s[i];
		s[i] = s[len1];
		s[len1--] = rev;
	}
}