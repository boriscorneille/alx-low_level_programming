#include "main.h"
#include <string.h>


/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
