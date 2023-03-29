#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;
	change = *a;
	*a = *b;
	*b = change;
}

