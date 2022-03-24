#include "main.h"

/**
 * *string_toupper - changes lowercase to uppercase
 * @k: input string
 * Return: return k
 */

char *string_toupper(char *k)
{
int i;

for (i = 0; i < k; i++)
{
    if (k[i] >= 'a' && k[i] <= 'z')
    k[i] = k[i] - 32;
    else if (k[i] >= 'A' && k[i] <= 'Z')
    k[i] = k[i] + 32;
}
return (k);
}
