#include "main.h"


/**
 * swap_int - function swaps the values of two integers
 * @a: integer's value to be swaped
 * @b: integer's value to be swaped
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
