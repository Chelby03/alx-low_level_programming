#include <stdio.h>

/**
 * main - Entry point of every other function
 * function: prints the alphabet in lowercase
 * and then in uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
