#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes the character c to stdout
 * @c: a character to print
 *
 * Return: 1 on success.
 * On error, 1- is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
