#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - func
 * @str: param
 * Return: 0;
 */
void puts_half(char *str)
{
	int length, start_index, i;
	
	length = strlen(str);
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
