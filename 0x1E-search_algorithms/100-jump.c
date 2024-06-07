#include <stdio.h>
#include <math.h>


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
