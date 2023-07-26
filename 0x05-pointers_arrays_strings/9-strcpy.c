#include "main.h"

/**
 * _strcpy - copies a string to somewhre
 * @src: poits to the input string
 * @dest: points to the buffer
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
