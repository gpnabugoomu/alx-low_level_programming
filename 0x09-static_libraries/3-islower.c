#include "main.h"

/**
 * _islower - a function that checks for lower character
 * @c: the character to be checked
 * 
 * Return: 1 if c is n lower case, 0 otherwise.
*/
int _islower(int c)
{
    return(c >='a' && c <= 'z');
}