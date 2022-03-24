#include "main.h"

/**
 * *cap_string - capitalize all string words
 * @k: input string
 * Return: k
 */
char *cap_string(char *k)
{
	int j = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (k[j] >= 97 && k[j] <= 122)
		k[j] = k[j] - 32;
	j++;
	while (k[j] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (k[j] == sep_words[i])
			{
				if ((k[j + 1]) >= 97) && (k[j + 1]) <= 122))
					k[j + 1]) = s[j + 1]) - 32;
				break;
			}
		}
		j++;
	}
	return (k);
}
