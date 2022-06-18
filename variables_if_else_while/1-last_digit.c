/*
 * File: 2-print_alphabet.c
 * Auth: Lalo Rdz
 */
#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase.
 *
 * Description: Program that prints the alphabet in lowercase.
 * Only use the putchar and only use it twice.
 * Return: Zero always.
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d and is ", n, last);
	if (last > 5)
		printf("greater than 5\n");
	if (last == 0)
		printf("greater tha 5\n");
	if (last < 6 && last != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
