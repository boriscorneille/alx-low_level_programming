#include <stdio.h>


/**
 * main - print all single digit of base 10
 *
 * Return: always (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
