#include "main.h"


/**
 * void print_alphabet_x10(void) - print 10 times the alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;char n = 0;
	
	while (n <= 9)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
