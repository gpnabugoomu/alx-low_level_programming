#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @scr: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */

char *_strcat(char *dest, char *scr)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (scr[m] != '\0')
	{
		dest[i] = scr[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return (dest);
}

