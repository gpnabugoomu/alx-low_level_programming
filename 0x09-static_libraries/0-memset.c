#include "main.h"

/**
 * _memset - fill a block of memory with a specific valuue
 * @s: starting address of memeroy to be filed
 * @b: the desired value
 * @n: the number of bytes to be changed
 * 
 * Return: a changed array with a new value of n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;
    for (;n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return(s);
}