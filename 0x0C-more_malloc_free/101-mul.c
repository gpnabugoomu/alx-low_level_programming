#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNumber - function to check if string is a number
 * @s: string to be checked
 * Return: Always (0), 1 (Error)
 */
int isNumber(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		if (s[x] < '0' || s[x] > '9')
			return (0);
	return (1);
}

/**
 * print_result - function to print result of multiplication
 * @result: an array of integers
 * @len: the result length
 * Return: Always (0)
 */
void print_result(int *result, int len)
{
	int a;

	for (a = 0; a < len && result[a] == 0; a++)
		;

	if (a == len)
		printf("0");

	for (; a < len; a++)
		printf("%d", result[a]);

	printf("\n");
}

/**
 * main - funtion to multiply two positive numbers
 * @ac: number of arguments count
 * @av: array of arguments vector
 * Return: Always (0)
 */
int main(int ac, char **av)
{
	int x, y, num1_len, num2_len;
	int *result;

	if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1_len = strlen(av[1]);
	num2_len = strlen(av[2]);

	result = calloc(num1_len + num2_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (x = num1_len - 1; x >= 0; x--)
	{
		for (y = num2_len - 1; y >= 0; y--)
		{
			int mul = (av[1][x] - '0') * (av[2][y] - '0');

			int sum = result[x + y + 1] + mul;

			result[x + y] += sum / 10;
			result[x + y + 1] = sum % 10;
		}
	}

	print_result(result, num1_len + num2_len);
	free(result);
	return (0);
}
