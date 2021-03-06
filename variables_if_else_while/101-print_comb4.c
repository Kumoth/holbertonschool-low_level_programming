/*
 * File: 01-print_comb4.c
 * Auth: Antonio K
 */
#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 *
 * Description: Combinations without repetitions.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int cent = 48;
	int dec;
	int unit;

	while (cent <= 57)
	{
		dec = cent + 1;
		while (dec <= 57)
		{
			unit = dec + 1;
			while (unit <= 57)
			{
				if (dec != unit)
				{
					putchar(cent);
					putchar(dec);
					putchar(unit);
					if (cent != 55 || dec != 56 || unit != 57)
					{
						putchar(44);
						putchar(' ');
					}
				}
				unit++;
			}
			dec++;
		}
		cent++;
	}
	putchar('\n');
	return (0);
}
