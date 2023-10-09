#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet
 * excluding 'q' and 'e', followed by a new line.
 * Only putchar function is allowed, used twice.
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
