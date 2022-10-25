#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char f = 'a';
	int num;

	for (num = 0; num< 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
		{
			putchar(f);
			f++;
		}
	}
	putchar('\n');
	return (0);
}
