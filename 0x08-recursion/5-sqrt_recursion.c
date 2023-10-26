#include "main.h"
/**
 * _sqrt_recursion - Finds the square root
 * @n: Number to find square root
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	double result;

	if (n < 0)
		return (-1);
	result = sqrt(n);
	if (result * result == n)
		return ((int)result);
	else
		return (-1);
}
