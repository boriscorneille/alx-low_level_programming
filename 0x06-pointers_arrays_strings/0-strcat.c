#include "main.h"
#include <string.h>


/**
 * _strcat - concatenates two strings
 * @src: string to be concatenated
 * @dest: string to be concatenated
 *
 * Return: a pinter to dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
