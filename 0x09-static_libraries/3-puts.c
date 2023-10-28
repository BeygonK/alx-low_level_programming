#include "main.h"
#include <stdio.h>

/**
 * _puts - prints to the output
 * @str: param
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
