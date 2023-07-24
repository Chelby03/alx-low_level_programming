#include <stdio.h>

/**
 * main - Entry point function
 * Description: prints the combination 
 * of all single-digit numbers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i == 9)
		{
			continue;
		}

		putchar(',');

		putchar(' ');
	}
	putchar('\n');

	return (0);
}
