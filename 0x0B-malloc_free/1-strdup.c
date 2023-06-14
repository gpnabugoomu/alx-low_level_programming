#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns pointer to a new allocated space
 * @str: the string to be copied
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int a, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (!duplicate)
		return (NULL);

	for (a = 0; a < len; a++)
		duplicate[a] = str[a];
	duplicate[a] = '\0';

	return (duplicate);
}
