#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string into an integer
 * @s: the string to be converted
 *
 * Return: a converted string to an int
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
 * main - function that multiplies two numbers
 * @argc: the number of arguments counts
 * @argv: the array of arguments vectors
 *
 * Return: Always (0), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	answer = n1 * n2;

	printf("%d\n", answer);

	return (0);
}
