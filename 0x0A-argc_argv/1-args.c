#include <stdio.h>
/**
 * main - Entry point
 * @argc: No of command line ags
 * @argv: Array of command line args
 *
 * Description: Prints number of args passed to it
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

