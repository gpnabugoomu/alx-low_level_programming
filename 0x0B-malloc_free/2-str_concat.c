#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Always (0), NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, a, b;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		continue;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		continue;
	str = malloc(s1_len + s2_len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;

	while (a < s1_len)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;

	while (a < (s1_len + s2_len))
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}
