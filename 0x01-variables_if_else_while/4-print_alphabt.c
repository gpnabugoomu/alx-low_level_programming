#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')
		putchar(e);
	}
	putchar('\n');
	return (0);
}
