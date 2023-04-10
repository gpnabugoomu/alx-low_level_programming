#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * 
 * Return: the dest 
*/
char *_strncpy(char *dest, char *src, int n)
{
    int j;
    while (j < n && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    while (j < n)
    {
        dest[j] = '\0';
        j++;
    }
    return (dest);
}