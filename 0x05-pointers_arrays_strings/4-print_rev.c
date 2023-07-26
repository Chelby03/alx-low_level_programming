#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * Return: void
 *@s: pointers to char
 */


void print_rev(char *s)
{
	int i;

	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}
	for (i = len - 1;  i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
