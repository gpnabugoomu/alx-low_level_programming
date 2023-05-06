#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - function to fill a block of memory with a specific value
 * @s: a starting address of memory to be filled
 * @b: the desired value
 * @n: thr number of bytes to be changed
 *
 * Return: a changed array and new values of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
