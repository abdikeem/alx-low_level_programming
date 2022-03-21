#include "main.h"

/**
 * rev_string - takes in string and return its reverse
 * @s: charactor string
 */

void rev_string(char *s)
{
int i, rev, len;
for (i = 0; i < len/2; i++ )
{
rev = s[i];
s[i] = s[len - i - 1];
s[len - i -1] = rev;
}
}
