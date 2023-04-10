#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input value
 * @accept: input value
 * 
 * Return: Always 0 Success
*/
char *_strpbrk(char *s, char *accept)
{
    int g;
    while (*s)
    {
        for (g = 0; accept[g]; g++)
        {
            if (*s == accept[g])
            return (s);
        }
        s++;
    }
    return ('\n');
}