#include "main.h"
/**
 * get_endianness - checks
 *
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *byte;

	num = 1
	byte = (char *)&num;

	return (*byte);
}
