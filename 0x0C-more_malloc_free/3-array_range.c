#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function to create an array of integers
 * @min: the min value
 * @max: the max value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int z, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (z = 0; min <= max; z++)
		ptr[z] = min++;

	return (ptr);
}
