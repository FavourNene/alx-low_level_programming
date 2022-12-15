#include "holberton.h"
/**
 * _isupper -  function that checks for uppercase character.
 * @c: input
 * Return: 1 if c is in uppercase and 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && c <= 'Z')
		return (1);
	else
		return (0);
}
