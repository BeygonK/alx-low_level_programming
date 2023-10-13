#include "main.h"
/**
 * print_numbers - prints from 0-9
 * Return: 0
 *
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= 'c'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
    print_numbers();
    return (0);
}
