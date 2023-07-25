#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * Return: void
 * @b: points to an int b
 * @a: pointes to an in a
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
