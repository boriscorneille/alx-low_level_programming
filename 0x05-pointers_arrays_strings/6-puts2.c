#include "main.h"
#include <stdio.h>


/**
 * puts2 - print every character of the string 
 * @str: the string to be printed
 *
 */
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			putchar(s[a]);
		}
	}
	putchar('\n');
}
