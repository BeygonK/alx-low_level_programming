#include "main.h"
/**
 * swap_int - swap integer;
 * @a: param
 * @b: param
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
