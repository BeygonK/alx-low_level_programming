#include "main.h"
/**
 * is_prime_recursive - Checks for prime number
 * @n: Integer to be checked
 * @divisor: param
 * Return: int
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}
/**
 * is_prime_number - check for the input
 * @n: NUmber  to be checked
 * Return: 1
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
