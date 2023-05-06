#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - function that copies a memory area
 * @dest: the memory which stores
 * @src: a memory copied from
 * @n: the number of bytes
 *
 * Return: the copied memory and n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int b = 0;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
