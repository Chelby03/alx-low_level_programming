#include <stdio.h>

/**
 * main - Entry point of every other function
 * function: prints the alphabet in lowercase
 * except q and e
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	if (i == 113 || i == 101)
	{
		continue;
	}
		putchar(i);
	}
	putchar('\n');

	return (0);
}
