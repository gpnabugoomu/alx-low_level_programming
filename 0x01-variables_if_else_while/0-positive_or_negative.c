#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: a program that assigns a random number to the varibale n eash time it is executed.
 * Return: always 0 (Success)
 */
int main(void){
	int n;
	srand(time(NULL));

	n = rand() - RAND_MAX / 2;

	if ( n > 0){
		printf("%d is positive\n", n);
	} else if ( n == 0){
		printf("%d is zero\n", n);
	} else {
		printf("%d is negative\n", n);
	}
	return (0);
}
