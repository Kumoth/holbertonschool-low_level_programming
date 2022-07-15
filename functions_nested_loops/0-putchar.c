/**
* File: 0-putchar.c
* Auth: Antonio Kumoth
*/

#include "main.h"

/**
 *Main-Write a program that prints _putchar, followed by a new line
 *Return: Always 0 (Success)
*/

int main (void)
{
	char c[9] = "putchar\n";
	int i;

/**
 *@a, @i
 *
 *Description: Variable C used for the "string" to putchar
 */
	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	return (0);
}
