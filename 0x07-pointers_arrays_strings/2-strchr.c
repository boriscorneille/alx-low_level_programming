#include "main.h"
#include <stddef.h>


/**
 * *_strchr - locates a character in a string
 * @c: character to be located
 * @s: string containing character
 * Return: return string s if c is fund , else return NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *a = NULL;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (a);
}
