#include "main.h"
/**
 * reverse_array - Reverse contents of array
 * @a: The array to reverse
 * @n: The size of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;
	
	j = n-1;
	i = 0;
	while (i <j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j++;
	}
}
