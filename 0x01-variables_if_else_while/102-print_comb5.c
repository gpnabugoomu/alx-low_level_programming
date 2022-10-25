#include <stdio.h>

/**
 * main-entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return:0 success, non zero fail
 */

int main(void)
{
  int a, n;

  for (a = 0; a < 99; a++)
	{
	  for (n = a + 1; n <= 99; n++)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);

			putchar(' ');

			putchar('0' + n / 10);
			putchar('0' + n % 10);

			if (a == 98 && n == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
