#include "main.h"
#include <string.h>
/**
 * reverse_array - Reverses an array
 * @a: first param
 * @n: size of an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[a - 1 - i] = temp;
	}
}
