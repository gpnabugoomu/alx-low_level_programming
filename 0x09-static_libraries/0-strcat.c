#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: the input value
 * @src: the inout value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		b++;
	}

	dest[i] = '\0';
	return (dest);
}
