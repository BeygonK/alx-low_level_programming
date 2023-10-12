#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table starting from 0
 * @n: integer input
 * Return: 0
 */
void print_times_table(int n)
{
	int i;
	
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= 10; i++)
			printf("%d x %d = %d\n", n, i, n * i);
	}
}
