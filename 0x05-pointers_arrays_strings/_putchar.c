#include <unistd.h>

/**
 * _putchar - it writes the character c into the stdout
 * @C: is the character to print
 * Return: 1 on success
 * on error, -1 is returned with error numbers set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
