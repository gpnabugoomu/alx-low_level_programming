#include <stdio.h>

/**
 * main - a function that prints all argments it receives.
 * @argc: nmber of arguments supplied ito the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on (Success)
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
