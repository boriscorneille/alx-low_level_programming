#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination of the copied string
 * @src: String to be copied
 * @n: Maximum number of bytes to be copied
 *
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
