#include <stdio.h>

/**
 * main - a function that prints a program name and a new line.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
