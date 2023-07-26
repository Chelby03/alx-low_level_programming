#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to the
 * standard output
 * Return: void
 * @str: points to a char
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

	_putchar(str[i]);

	}
	_putchar('\n');

}
