#include "main.h"


/**
 * *_memcpy -  copies memory area
 * @n: byte
 * @src: where bytes will be copied from
 * @dest: destination of copied bytes
 * Return: always dest successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
