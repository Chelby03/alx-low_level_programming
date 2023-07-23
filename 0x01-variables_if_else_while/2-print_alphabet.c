#include <stdio.h>

/**
 * main - Entry point of every other function
 * putchar: prints characters to the standar output
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
