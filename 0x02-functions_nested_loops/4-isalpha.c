#include "main.h"

/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char i;
	int isletter = 0;
	char n;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		for (n = 'A' ; n <= 'Z' ; n++)
		{
			if (c == i || c == n)
				isletter = 1;
		}
	}
	return (isletter);
}
