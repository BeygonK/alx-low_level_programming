#include <stdlib.h>
/**
 * main - entry point program
 * @argc: NUmber of command line args
 * @argv: Array containing command-line
 *
 * Description: Multiply two numbers given
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
