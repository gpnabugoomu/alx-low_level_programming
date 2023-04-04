#include "main.h"

/**
 * _strstr - Location a substring.
 * @haystack: The string to be searched.
 * @gideon: The substring to be located.
 *
 * Return: If the substring is located - a pointer is the beginning
 *
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *gideon)
{
	int index;

	if (*gideon == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == gideon[index])
		{
			do {
				if (gideon[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == gideon[index]);
		}

		haystack++;
	}

	return ('\0');
}
