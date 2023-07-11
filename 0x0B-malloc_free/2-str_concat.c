#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenate two numbers
 * @s1: char 1
 * @s2: char 2
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0, j = 0, count, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	res = malloc(k * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (count = 0 ; count <= i ; count++)
	{
		res[count] = s1[count];
	}
	for (count = 0 ; count <= j ; count++)
	{
		res[count + i] = s2[count];
	}
	return (res);
}
