#include <stdio.h>


/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 2, fibsum, tot_sun;

	while (1)
	{
		fibsum = fb1 + fb2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			tot_sun += fibsum;
		fb1 = fb2;
		fb2 = fibsum;
	}
	printf("%lu\n", tot_sun);
	return (0);
}
