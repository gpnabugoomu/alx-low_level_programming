#include "main.h"
#include <stdio.h>

/**
 * main - function that prints a number of args to stdout
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
