#include "main.h"

/**
 * reverse_array - returns array backwards
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, x, rev;

    while (i < n)
    {
        /* code */
        i++;
		for (x = i + 1; x > 0; x--)
		{
			rev = *(a + x);
			*(a + x) = *(a + (x - 1));
			*(a + (x - 1)) = rev;
		}
	}
}