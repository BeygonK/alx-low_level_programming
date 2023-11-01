#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: No of command line args
 * @argv: Array of command line args
 *
 * Description: Prints name followed by a new line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error");
		return (1);
	}
}

