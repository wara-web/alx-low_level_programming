#include "main.h"

/**
 * print_diagonal -draws a diagonal line according to the code
 * @n: the number of times to draw the diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
