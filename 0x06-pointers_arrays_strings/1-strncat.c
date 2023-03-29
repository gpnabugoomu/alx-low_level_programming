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
	int index = strlen(dest);
	int v = 0;

	while (v < n && *src)
	{
		dest[index + v] = *src;
		src++;
		v++;
	}
	dest[index + v] = '\0';
	return (dest);
}
