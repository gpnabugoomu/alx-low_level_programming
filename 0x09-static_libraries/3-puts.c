#include "main.h"

/**
 * _puts - function to point to a string, a new line to the stdout
 * @str: the string to be pointed to
*/
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(str++);
    }
    _putcchar('\n');
}