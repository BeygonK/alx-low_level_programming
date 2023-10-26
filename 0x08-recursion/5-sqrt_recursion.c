#include "main.h"
/**
 * _sqrt_recursion - Finds the square root
 * @n: Number to find square root
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursive_a(n, 1));
}

/**
 * _sqrt_recursive_a - helper function
 * @n: NUmber
 * @x: current
 * Return: Square root
 */
int _sqrt_recursive_a(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (_sqrt_recursive_a(n, x + 1));
}
