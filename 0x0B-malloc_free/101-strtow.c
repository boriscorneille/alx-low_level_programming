#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
char *extract_word(char *str);
char **strtow(char *str);

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			count++;

			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
 * extract_word - Extracts a single word from a string.
 * @str: The input string.
 *
 * Return: A pointer to the extracted word.
 */
char *extract_word(char *str)
{
	char *word;
	int i, word_len;

	word_len = 0;

	while (str[word_len] != ' ' && str[word_len] != '\0')
		word_len++;

	word = malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < word_len; i++)
		word[i] = str[i];

	word[word_len] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (*str == ' ')
			str++;

		words[i] = extract_word(str);
		if (words[i] == NULL)
		{
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		j += strlen(words[i]) + 1;
		str += strlen(words[i]) + 1;
	}

	words[word_count] = NULL;

	return (words);
}
