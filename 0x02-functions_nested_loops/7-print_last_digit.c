#include "main.h"

/**
 * print_last_digit - Check last digit
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int c;

	if (r > 0)
		c = r % 10;
	else 
		c = -1 * (r % 10);
	_putchar(c % 10);
	return (c % 10);
}
