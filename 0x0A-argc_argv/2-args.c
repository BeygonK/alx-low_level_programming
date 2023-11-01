#include <stdio.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv: command line args
 *
 * Description: Prints each args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
