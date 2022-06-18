/*
 * File: 3-print_alphabet.c
 * Auth: Antonio Kumoth
 */
#include <stdio.h>
/**
 * main - Program that prints alphabet in lowercase and uppercase.
 *
 * Description: Program that prints the alphabet in lowercase and uppercase.
 * Only use the putchar and only use it three times
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
	/*
	 * We use char that starts in 'A' and finish in 'Z'.
	 * But also we can use an integer that starts in 65
	 * and finish in 90.
	 */
	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
