#include "main.h"

/**
 * reverse_array - returns array backwards
 * @a: pointer
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, reverse;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			reverse = a[j];
			a[j] = a[j - 1];
			a[j - 1] = reverse;
		}
	}
}
