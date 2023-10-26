#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
	{
		_putchar('\n');
	}
}
