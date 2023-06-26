#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * rev_string - reverses a string
 * @s: a pointer to the string to be reversed
 *
 */
void rev_string(char *s)
{
	int a, len, len1;
	char temp;

	len = 0;
	len1 = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (a = 0; a <= len / 2; a++)
	{
		temp = s[a];
		s[a] = s[len1];
		s[len1--] = temp;
	}
}

