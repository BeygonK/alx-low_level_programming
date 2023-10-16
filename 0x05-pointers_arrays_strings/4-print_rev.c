#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints string in revrse
 * @s: param
 * Return: 0
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (length > 0)
	{
		putchar(*s);
		s--;
		length--;
	}
	putchar('\n');
}
