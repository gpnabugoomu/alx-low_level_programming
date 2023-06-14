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
	char *duplicate_number;
	int a = 0, len = 0;

	duplicate_number = malloc(sizeof(char) * (len + 1));
	if (str == 0 || duplicate_number == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		duplicate_number[a] = str[a];
		len++;
	}
	duplicate_number[len] = '\0';
	return (duplicate_number);
}
