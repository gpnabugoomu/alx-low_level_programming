#include "main.h"
/**
 * get_endianness - function to get endiannes of the arch
 * Return: Always 1 on small indian,
 * and 0 on big indian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
