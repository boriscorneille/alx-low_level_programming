#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, tags;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (tags = size - hash; tags > 0; tags--)
				_putchar(' ');

			for (tags = 0; tags < hash; tags++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
