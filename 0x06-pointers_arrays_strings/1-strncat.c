#include <stdio.h>
/**
 * _strncat - Concatenates two strings
 *
 * @dest: The string being added to
 *
 * @src: The string that is being added
 *
 * @n: Number of chars to print from src
 *
 * Return: Pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
