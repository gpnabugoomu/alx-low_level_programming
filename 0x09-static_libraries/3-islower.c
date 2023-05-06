#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - function that checks for a lowercase character
 * @c: character to be checked
 *
 * Return: 1 on success, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
