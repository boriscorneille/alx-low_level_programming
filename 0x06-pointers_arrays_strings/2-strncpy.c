#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * _strncpy - function that copies a string
 * @src: string to be copied
 * @dest: destination of the copied string
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(src,dest,n);
	printf(dest,"%c\n", n);
	return (dest);
}
