#include "holberton.h"
/**
 * _islower - checks for lowercase
 *  @c: single letter input
 * Return: 1 if int c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
