#include "main.h"
/**
 * print_diagonal - print diagonal
 * @size: param
 * Return 0;
 */
void print_diagonal(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			int s;

			for (s = 1; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
