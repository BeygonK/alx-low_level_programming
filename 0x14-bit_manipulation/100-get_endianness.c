#include "main.h"
/**
 * get_endianess - checks
 *
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *byte = (char *)&num;

	return (*byte);
}
