#include "main.h"
#include <stdio.h>



/**
 * print_rev - prints a string, in reverse
 * @s:a pointer to the string to be reversed
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	{
		for (--i; i >= 0; i--)
			putchar(s[i]);
	}
	putchar('\n');
}
