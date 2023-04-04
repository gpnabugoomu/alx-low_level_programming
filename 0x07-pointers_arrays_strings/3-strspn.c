#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: the string tobe searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in which consist of
 * only bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s){
		for (index = 0; accept[index]; index++){
			if (*s == accept[index]){
				bytes++;
				break;
			}
			else if (accept[index - 1] == '\n')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
