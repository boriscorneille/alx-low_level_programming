#include "main.h"

/**
 * reverse_array - will print elements of an array in reverse
 * @n: will represent elements of an array
 * @a: a pointer to the array to be reversed
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0 ; i < n/2 ; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
