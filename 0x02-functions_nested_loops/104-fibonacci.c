#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (a = 0; a < 99; a++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (a == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
