#include "main.h"

/**
 * _memcpy - function that copies  the memory area
 * @dest: the memory to store
 * @src: the memeory copied
 * @n: n is the number of bytes
 * 
 * REturn: the copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int g = 0;
    int i = n;

    for (; g = i; i++)
    {
        dest[g] = src[g];
        n--;
    }
    return (dest);
    
}