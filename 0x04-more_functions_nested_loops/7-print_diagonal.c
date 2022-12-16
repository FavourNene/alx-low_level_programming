#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 *
 *  Return: a diagonal
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < n; x++)
			{
				_putchar(' ');
			}
		
			_putchar('\n');
		}
	}
}
