#include "main.h"


/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == 0)
		_putchar('\0');
	else
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
}