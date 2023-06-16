#include <stdio.h>


/**
 * main - print all single digit of base 10
 *
 * Return: always(success)
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
