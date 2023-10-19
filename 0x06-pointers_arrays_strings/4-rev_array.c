#include "main.h"
#include <string.h>
#define N 1000
/**
 * reverse_array - Reverses an array
 * @a: first param
 * @n: size of an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = end;
		a[end] = temp;

		start++;
		end--;
	}

}	
