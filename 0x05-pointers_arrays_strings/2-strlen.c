#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen -  function that returns the length of a string.
 * @s: char input
 * Return: length of the string
 */

int _strlen(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	printf("%d", i);
		return (i);
}
