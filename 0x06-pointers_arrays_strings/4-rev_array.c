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
x = i + 1;
while (x > 0)
{
rev = a[x];
a[x] = a[x - 1];
a[x - 1] = rev;
i++;

}
}
}
