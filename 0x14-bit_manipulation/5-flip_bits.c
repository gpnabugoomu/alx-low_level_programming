#include "main.h"
/**
 * flip_bits - function to count bit to change to another value
 * @n: number
 * @m: number to compare
 *
 * Return: number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;

	a = 0;
	n = n ^ m;
	while (n)
	{
		a += n & 1;
		n >>= 1;
	}
	return (a);
}
