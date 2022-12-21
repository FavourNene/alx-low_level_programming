#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	_putchar(dest);

	return (0);
}
