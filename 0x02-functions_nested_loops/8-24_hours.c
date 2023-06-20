#include "main.h"

/**
 * jack_bauer - Check Holberton
 * Description: function prints every minute in one day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int M, H;

	for (M = 0 ; M < 60 ; M++)
	{
		for (H = 0 ; H < 24 ; H++)
		{
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar(':');
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar('\n');
		}
	}
}
