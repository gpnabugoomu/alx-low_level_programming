#include <stdio.h>

/**
 * main - Entry point
 * Return; always 0 (success)
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);
	putchar('\n');
	return (0);
}
