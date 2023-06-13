#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints  mini coin num making change on amount of money
 * @argv: the number of arguments count
 * @argc: the number of arguments vector
 *
 * Return: Always (0), 1(Error)
 */
int main(int argc, char *argv[])
{
	int a, cents, coins = 0;
	int denominations[5];
	int num_denominations;

	if (argc != 2)
		return (printf("Error\n"), 1);

	cents = atoi(argv[1]);

	if (cents < 0)
		return (printf("0\n"), 0);

	denominations[0] = 25;
	denominations[1] = 10;
	denominations[2] = 5;
	denominations[3] = 2;
	denominations[4] = 1;

	num_denominations = sizeof(denominations) / sizeof(int);

	for (a = 0; a < num_denominations && cents; a++)
	{
		coins += cents / denominations[a];
		cents %= denominations[a];
	}

	printf("%d\n", coins);
	return (0);
}


