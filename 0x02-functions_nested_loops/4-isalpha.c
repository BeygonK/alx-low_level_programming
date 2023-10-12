#include "main.h"
#include <ctype.h>
/**
 * int _isalpha - chech if c is alpha
 * Return: 1 (success)
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
