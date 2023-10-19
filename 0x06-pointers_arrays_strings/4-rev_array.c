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
	int i;

	int arr2[N];

	for (i = 0; i < n; i++)
	{
		arr2[i] = arr[n-i-1];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = arr2[i];
	}
}
