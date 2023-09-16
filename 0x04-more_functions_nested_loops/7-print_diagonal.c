#include "main.h"
/**
 * print_diagonal - print diagonal using the '\' character
 * @n: number of times the '\' should be printed
 * return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= 1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
