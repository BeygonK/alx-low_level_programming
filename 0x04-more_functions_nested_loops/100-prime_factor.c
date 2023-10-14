#include "main.h"
#include <stdio.h>

/**
 * find_largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The input number.
 *
 * Return: The largest prime factor.
 */
long find_largest_prime_factor(long num)
{
	long largest_prime = -1;
	long i;

	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largest_prime = num;
	}
	return (largest_prime);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	long num = 612852475143;
	long largest_prime = find_largest_prime_factor(num);

	printf("The largest prime factor of %ld is %ld.\n", num, largest_prime);
	return (0);
}
