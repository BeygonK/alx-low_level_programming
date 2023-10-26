#include "main.h"
int _sqrt_recursive(int y, int x);
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
		return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - helper function
 * @y: NUmber
 * @x: current
 * Return: Square root
 */
int _sqrt_recursive(int y, int x)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (_sqrt_recursive(y, x + 1));
}
