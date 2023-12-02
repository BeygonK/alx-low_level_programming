#include "main.h"
#include <ctype.h>
/**
 * _isalpha - chech if c is alpha
 * @c: param
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
