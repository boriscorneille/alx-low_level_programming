#include "main.h"
#include <stdio.h>


/**
 * puts2 - print every character of the string 
 * @str: the string to be printed
 *
 */
void puts2(char *str)
{

	for (;*str != 0; str += 2 )
	{
		putchar(*str);
	}
	putchar('\n');
}
