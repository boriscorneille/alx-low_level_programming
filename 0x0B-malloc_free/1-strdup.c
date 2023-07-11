#include "main.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *me;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	me = malloc(i * sizeof(char));
	if (me == NULL)
		return (NULL);
	for (j = 0 ; j < i ; j++)
	{
		me[j] = str[j];
	}
	return (me);
}
