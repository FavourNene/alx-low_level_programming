#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 * Return: 0-14 x10
 */

void more_numbers(void)
{
	int n, int i;


	for (n = 0 ; n < 10 ; i++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
	_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
