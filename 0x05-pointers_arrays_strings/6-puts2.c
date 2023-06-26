#include "main.h"
#include <stdio.h>


/**
 * puts2 - print every character of the string 
 * @str: the string to be printed
 *
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}
