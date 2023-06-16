#include <stdio.h>


/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: always (success)
 */
int main(void)
{
	char n;

	for (n= '0' ; n <= '9' ; n++)
		putchar(n);
	if (n != '9')
		putchar(',');
	putchar('\n');
	return (0);
}
