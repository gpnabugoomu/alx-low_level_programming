#include <stdio.h>
#include <stdlib.h>

/**
 * main - functoin that prints result od addition and a nw line
 * @argc: the number of arguments count
 * @argv: the number of arguments vector
 *
 * Return: Always (0), 1(Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (printf("Error\n"), 1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
