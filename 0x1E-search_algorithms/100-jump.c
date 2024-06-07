#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value) {

	unsigned long step;
	unsigned long prev;
        unsigned long curr;
        unsigned long i;

	if (array == NULL || size == 0) {
		return -1;
	}

	step = (unsigned long)sqrt(size);
	prev = 0;
	curr = 0;

	while (curr < size && array[curr] < value) {
	    printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
	    prev = curr;
	    curr += step;
	}
	
	for (i = prev; i < fmin(curr, size); i++) {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return (i);
		}
	}

	return (-1);
}
