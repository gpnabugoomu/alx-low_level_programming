#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function thst prints length of a string
 * @s: string to be printed
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int z = 0;

	while (s[z])
		z++;
	return (z);
}

/**
 * copy_word - function that copies a word from a string
 * @str: the string to copy from
 * @start: the start index of word
 * @end: the end index of word
 *
 * Return: pointer to the word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int z;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	for (z = 0; z < end - start; z++)
		word[z] = str[start + z];
	word[z] = '\0';

	return (word);
}

/**
 * count_words - functions to count num of words in a string
 * @str: string counted
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	int word_count = 0, str_len, z;

	if (!str || !str[0])
		return (0);

	str_len = _strlen(str);

	for (z = 0; z < str_len; z++)
	{
		if (str[z] != ' ' && (str[z + 1] == ' ' || str[z + 1] == '\0'))
			word_count++;
	}

	return (word_count);
}

/**
 * free_words - functoin to free an array of words
 * @words: an array of words to be freed
 * @word_count: the number of words
 * Return: Always (0)
 */
void free_words(char **words, int word_count)
{
	int z;

	for (z = 0; z < word_count; z++)
		free(words[z]);
	free(words);
}

/**
 * strtow - function that splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to array of strings
 */
char **strtow(char *str)
{
	char **words;
	int word_count, str_len, start = 0, end, index = 0, z;

	word_count = count_words(str);
	if (!word_count)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);

	str_len = _strlen(str);
	for (z = 0; z < str_len; z++)
	{
		if (str[z] != ' ' && (str[z + 1] == ' ' || !str[z + 1]))
		{
			end = z + 1;
			words[index] = copy_word(str, start, end);
			if (!words[index])
				return (free_words(words, index), NULL);
			index++;
		} else if (str[z] != ' ' && str[z + 1] != ' ')
			continue;
		else
			start = z + 1;
	}

	return (words);
}
