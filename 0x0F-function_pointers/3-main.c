#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * main - Entry pont
 * @argc: Command line args
 * @argv: Array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
