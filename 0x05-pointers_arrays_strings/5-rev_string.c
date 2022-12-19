#include "main.h"
/**
 * print_rev - function that reverses a string.
 * @s: pointer to the string
 * Return: (void)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c ; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}