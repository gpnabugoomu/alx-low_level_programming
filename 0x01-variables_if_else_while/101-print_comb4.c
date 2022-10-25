#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * of thress digits.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int g;
	int p;

	for (n = 48; n < 58; n++)
	{
		for (g = 48; g < 58; g++)
		{
			if (g > n)
			{
				for (p = 48; p < 58; p++)
				{
					if (p > g)
					{
					putchar(n);
					putchar(g);
					putchar(p);
					if (n == 55 && g == 56 && p == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
