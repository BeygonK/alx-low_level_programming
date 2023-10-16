#include "main.h"
#include <stdio.h>
/**
 * _atoi - Pirint atoi
 * @s: param
 * Return: 0
 */
int _atoi(char *s)
{
	int result, sign;

	result = 0;
	sign = 1;

	while (*s == ' ' || (*s >= 9 && *s  <= 13))
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
	}
	s++;

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
