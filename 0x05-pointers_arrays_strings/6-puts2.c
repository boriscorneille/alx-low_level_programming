#include "main.h"
#include <stdio.h>


/**
 * puts2 - print every character of the string 
 * @str: the string to be printed
 *
 */
void puts2(char *str)
{
	int i = 0, len = 0;
	
	while (str[i++])
	{
		len++;
	}
	for (i = 0; i < len ; i += 2)
		putchar(str[i]);
	putchar('\n');
}
