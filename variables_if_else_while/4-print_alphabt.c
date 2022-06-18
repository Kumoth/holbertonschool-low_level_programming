/*
 * File: 4-print_alphabt.c
 * Auth: Antonio Kumoth
 */
#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase.
 *
 * Description: Program that prints the alphabet in lowercase.
 * Print all the letters except q and e.
 * Only use the putchar and only use it twice.
 * Return: Zero always.
 */
int main(void)
{
	char letra;

	/*
	 * We use char that starts in 'a' and finish in 'z'.
	 * But also we can use an integer that starts in 97
	 * and finish in 122.
	 */
	for (letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra != 'e' && letra != 'q')
		{
			putchar(letra);
		}
	}
	putchar('\n');
	return (0);
}
