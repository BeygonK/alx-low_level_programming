#include <ctype.h>
#include "main.h"

/**
 * _islower - chech if a character is lowercase
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
