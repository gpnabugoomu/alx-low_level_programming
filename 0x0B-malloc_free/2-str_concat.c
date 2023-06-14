#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Always (0), NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int s1_len, s2_len, a, b;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	new = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (NULL);

	for (a = 0; a < s1_len; a++)
		new[a] = s1[a];

	for (b = 0; b < s2_len; b++)
		new[a + b] = s2[b];

	new[a + b] = '\0';

	return (new);
}
