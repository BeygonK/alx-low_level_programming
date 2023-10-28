#include "main.h"
#include <ctype.h>
/**
 * _isdigit - chechs for a digit
 * @c: parameter
 * Return: 0
 *
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
