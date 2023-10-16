#include "main.h"
#include <stdio.h>
/**
 * puts2 - print char;
 * @str: param
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
