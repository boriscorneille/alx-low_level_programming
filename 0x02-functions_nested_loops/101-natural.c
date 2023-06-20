#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main()
{
	int a;

	if (a < 1024)
	{
		if ((a / 3) || (a / 5))
		{
			printf("%d\n", a);
			a++;
		}
	}
	return (0);
}
