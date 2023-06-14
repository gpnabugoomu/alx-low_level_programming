#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatinates all arguments
 * @ac: the num of argument count
 * @av: the num of argument vector
 *
 * Return: an aray of arguments
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, z, len;

	if (!ac || !av)
		return (NULL);

	for (x = 0, len = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0, z = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			str[z] = av[x][y];
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';

	return (str);
}
