#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks for uppercase letter
 * @c: parameter
 * Return: 0
 *
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
