#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int leng, width;

	if (size > 0)
	{
		for (leng = 0 ; leng < size ; leng++)
		{
			for (width = 0 ; width < size ; width++)
				_putchar('#');
		if (leng == size - 1)
			continue;
		_putchar('\n');
		}
	}
	_putchar('\n');
}
