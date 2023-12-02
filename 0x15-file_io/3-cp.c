#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * displayUsage - displays usage message
 */
void displayUsage(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * displayError - display error mesg
 * @code: error code
 * @filename: filename
 *
 * Return: void
 */
void displayError(int code, const char *filename)
{
	switch (code)
	{
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(2, "Error: Can't close fd %s\n", filename);
			break;
		default:
			break;
	}
	exit(code);
}

/**
 * main - entry point
 * @argc: No. of args
 * @argv: Array of args
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
		displayUsage();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		displayError(98, argv[1]);

	fd_to = open(argv[2], O_WRONLY |  O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
		displayError(99, argv[2]);

	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);

		if (bytesWritten != bytesRead)
			displayError(99, argv[2]);
	}
	if (bytesRead == -1)
		displayError(100, argv[1]);

	if (close(fd_from) == -1)
		displayError(100, argv[1]);

	if (close(fd_to) == -1)
		displayError(100, argv[2]);

	return (0);
}
