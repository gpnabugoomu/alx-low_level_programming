#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * 
 * Return: Always 0 (Success)
*/
char *_strtstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        char *i = haystack;
        char *t = needle;
        while (*i == *t && *t != '\0')
        {
            i++;
            t++;
        }
        if (*t == '\0')
                return (haystack);
    }
    return (0);
}