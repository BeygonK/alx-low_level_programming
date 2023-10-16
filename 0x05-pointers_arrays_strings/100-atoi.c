#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: String to ne converted
 *
 * Return: value of string
 */
int _atoi(char *s)
{
	int sign, result, i;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 / 10) || (result == 2147483647 / 10 && *s - '0' > 7))
			return ((sign == 1) ? 2147483647 : -2147483648)
	}
	result = result * 10 + (*s - '0')
	s++;
}
