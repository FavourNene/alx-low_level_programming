#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string input
 * Return - string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		puts(str[i]);
	}
	_putchar('\n');

}
