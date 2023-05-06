#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - function that compares string values
 * @s1: the input value
 * @s2: the input value
 *
 * Return: s1[a] - s2[a]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}
