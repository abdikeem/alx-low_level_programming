#include "main.h"

/**
 * reverse_array - returns array backwards
 * @a: pointer
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int i , x, rev;

for (i = 0; i < n - 1; i++)
{
for (x = i + 1; x > 0; x--)
{
rev = a[j];
a[j]= a[x - 1];
a[j - 1] = rev;
}
}
}
