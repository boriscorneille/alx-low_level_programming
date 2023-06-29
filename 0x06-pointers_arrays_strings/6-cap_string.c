#include "main.h"


/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32;
		}
		else if (c[i-1] == ' ' || c[i-1] == '\n' || c[i-1] == '.')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32;
		}
	}
	return (c);
}
