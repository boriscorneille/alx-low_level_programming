#include "main.h"


/**
 * _strncpy - function that copies a string
 * @src: string to be copied
 * @dest: destination of the copied string
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
