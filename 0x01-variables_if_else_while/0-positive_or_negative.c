#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print a random number to the variable n
 *
 * Return: always (successs)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is greater than 0\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is less than zero\n", n);
	return (0);
}
