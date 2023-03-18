#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:  A program that prints all possible combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void){
	int x = 0;
	int y_z;
	int s_z;
	
	int x2;
	int y_z2;
	int s_z2;
	
	while (c <= 98){
		y_z = ( x / 10 + '0');
		s_z = ( x % 10 + '0');
		x2 = 0;
		while (c2 <= 99){
			y_z2 = (x2 / 10 + '0');
			s_z2 = (x2 % 10 + '0');
			
			if (x < x2){
				putchar(y_z);
				putchar(s_z);
				putchar(' ');
				putchar(y_z2);
				putchar(s_z2);
				
				if ( x != 98){
					putchar(',');
					putchar(' ');
				}
			}
			x2++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
