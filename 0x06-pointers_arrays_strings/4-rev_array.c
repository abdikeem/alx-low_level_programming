#include "main.h"

/**
 * reverse_array - returns array backwards
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int i , x, rev;

for (i = 0; i < n; i++)
{
for (x = i + 1; x > 0; x--)
{
rev = *(a + x);
*(a + x) = *(a + (x - 1));
*(a + (x - 1)) = rev;
}
}
}

