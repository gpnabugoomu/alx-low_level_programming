#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: the int to be checked
 * 
 * Return: 1 if c is a digit, 0 thoerwise
*/
int _isdigit(int c)
{
    return(c >= '0' && c <= '9');
}