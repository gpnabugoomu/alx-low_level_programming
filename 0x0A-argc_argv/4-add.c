#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string into an integer
 * @s: the string to be converted to an integer
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}


/**
 * main - function that adds two positive numbers
 * @argc: the number of arguments count
 * @argv: the number of arguments vector
 *
 * Return: Always (0), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int total, number, a, b, c;

	number = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				puts("Erorr");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		number = _atoi(argv[c]);
		if  (number >= 0)
		{
			total += number;
		}
	}

	printf("%d\n", total);
	return (0);
}
