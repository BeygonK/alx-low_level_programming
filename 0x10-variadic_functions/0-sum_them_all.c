#include <stdarg.h>

/**
 * sum_them_all - Returns the sum
 * @n: The number of parmas
 * Return: THe sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0;  i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
