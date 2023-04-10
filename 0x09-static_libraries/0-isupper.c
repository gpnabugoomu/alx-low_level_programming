#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to be checked
 * 
 * Return: 0 on Success or 1
*/
int _isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}