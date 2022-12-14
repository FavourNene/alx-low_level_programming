#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n;
	char letter;

	n = 0;
	while (n < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		n++;
	_putchar('\n');
	}
}
