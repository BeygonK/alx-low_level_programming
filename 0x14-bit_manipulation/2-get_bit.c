#include "main.h"
/**
 * get_bit - get bit at a given index
 * @n: param
 * @index: index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;

	return (n & 1);
}
