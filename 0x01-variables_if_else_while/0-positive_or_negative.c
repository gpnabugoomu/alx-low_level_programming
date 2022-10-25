#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description - prints random generated number if positive, zero or negative
 8 Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (p < 0)
		printf("%d is negative\n", p);
	else if (p == 0)
		printf("%d is zero\n", p);
	else
		printf("%d is positive\n", p);
	return (0);
}
