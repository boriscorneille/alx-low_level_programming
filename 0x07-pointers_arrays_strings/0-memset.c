#include "main.h"


/**
 * *_memset - fills memory with a constant byte
 * @n: number of bytes to be asigned to a pointer
 * @b: bytes
 * @s: pointer
 * Return: s always successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
