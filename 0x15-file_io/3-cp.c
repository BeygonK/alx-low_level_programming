#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - cp files
 * @file_from: source
 * @file_to: dest
 *
 * Return: (1);
 */

int copy_file(int file_from, int file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t n;

	while ((n = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, n) != n)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to\n");
			exit(99);
		}
	}

	if (n == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		exit(100);
	}
	return (1);
}

/**
 * main - copies file
 * @argc: cmd args
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[0], O_RDONLY);
	file_to = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	return (copy_file(file_from, file_to));
}
