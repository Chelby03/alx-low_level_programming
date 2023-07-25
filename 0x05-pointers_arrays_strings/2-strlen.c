#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * Return: lenght of a string
 * @s: pointer to a char
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}

	return (length);
}
