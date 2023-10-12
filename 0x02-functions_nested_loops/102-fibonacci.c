#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - prints the first n Fibonacci numbers
 * @n: number of Fibonacci numbers to print
 * Return: 0
 */
void print_fibonacci(int n)
{
	int i;

	int fib[n];
	fib[0] = 1;
	fib[1] = 2;
	
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
