#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	L = n % 10;

	if (L > 5){
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	} else if (L == 0){
		printf("%s %d is %d and 0\n", str, n, L);
	} else if (L < 6){
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
	}
 	return (0);
=======
	last_digit = n % 10;
	if (last_digit > 5){
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0){
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	  } else if (n < 6 && n != 0){
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	     }
	return (0);
>>>>>>> c84fe3d829f2f22de7011221621841afacdb72e5
}
