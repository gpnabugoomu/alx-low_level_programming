#include <stdio.h>

/**
 * main - a function that prints a program name and a new line.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
