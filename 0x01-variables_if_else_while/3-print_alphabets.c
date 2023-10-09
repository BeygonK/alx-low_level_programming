#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase,
 * then in uppercase, followed by a new line.
 * Only putchar function is allowed, used three times.
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}

