#include "main.h"


/**
 * cap_string - capitalize all words of a string
 * @c: string
 * Return: `c`
 */
char *cap_string(char *c)
{
	int i, s;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; c[i] != '\0'; i++)
	{
		if (c[0] > 96 && c[0] < 123)
			trigger = 1;
		for (s = 0; nots[s] != '\0'; s++)
		{
			if (nots[s] == c[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (c[i] > 96 && c[i] < 123)
			{
				c[i] -= 32;
				trigger = 0;
			}
			else if (c[i] > 64 && c[i] < 91)
				trigger = 0;
			else if (c[i] > 47 && c[i] < 58)
				trigger = 0;
		}
	}
	return (c);
}
