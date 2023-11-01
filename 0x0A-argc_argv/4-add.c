#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry pont of program
 * @argc: NUmber of command-line
 * @argv: Arraycontaining command line
 * Description: This adds
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				fprintf(stderr, "Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
