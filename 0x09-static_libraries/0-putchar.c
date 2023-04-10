#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to be printed.
 * 
 * Return: Always 0 (Success)
 * on error, -1 is returned and errno is set approriately.
*/
int _putchar(char c)
{
    return(write(1, &c, 1));
}