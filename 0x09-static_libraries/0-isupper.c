#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks for uppercase letter
 * @c: parameter
 * Return: 0
 *
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
