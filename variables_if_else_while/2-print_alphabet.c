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
	char letra;

	/*
	 * We use char that starts in 'a' and finish in 'z'.
	 * But also we can use an integer that starts in 97
	 * and finish in 122.
	 */
	for (letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
