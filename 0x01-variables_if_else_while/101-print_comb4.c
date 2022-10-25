#include <stdio.h>
/**
 * main - program that prints all possible different combin * ations of these digits.
 *
 * Return: 0
 */
int main(void)
{
	int g;
	int p;
	int n;

	for (g = 48; g < 58; g++)
	{
		for (p = 48; p < 58; p++)
		{
			if (p > g)
			{
				for (n = 48; n < 58; n++)
				if (n > p)
			
