#include <string.h>


/**
 * _strlen -  returns the length of a string
 * @count: stole the string length
 *
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
