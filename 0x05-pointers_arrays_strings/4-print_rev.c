#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints string in revrse
 * @s: param
 * Return: 0
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
