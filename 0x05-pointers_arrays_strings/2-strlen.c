#include <string.h>


/**
 * _strlen -  returns the length of a string
 * @len: stole the string length
 *@s: is a pointer to the string
 *Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
