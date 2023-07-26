#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array of sizen
 * @a: poiter that poits to an integer
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	if (a)
	{

		int i = 0;

		while (i < n)
		{
			printf("%d", a[i]);
			if (i <= (n - 1))
			{
				printf(",");
				printf(" ");
			}
			i++;

		}
	}
	printf("\n");
}
