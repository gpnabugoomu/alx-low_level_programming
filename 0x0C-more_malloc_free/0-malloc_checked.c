#include <stdlib.h>

/**
 * malloc_checked - it allocates memory using malloc
 * @b: the size of memory to be allocated
 *
 * Return: the pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
