#include "main.h"
#include <string.h>


/**
 * _strncat - concatenates two strings
 * @src: string to be concatenated
 * @dest: string to be concatenated
 * Return: a ponter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest,src,n);
	return (dest);
}
