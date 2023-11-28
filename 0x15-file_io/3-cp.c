#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints error
 * @exit_code: the exit code
 * @format: format str
 */
void print_error(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
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
	int src, dest, bytes_r, bytes_w;
	char buffer[BUFFER_SIZE];
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error(97, "Usage: %s src dest\n", argv[0]);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		print_error(98, "Cant read from file %s\n", argv[1]);

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (dest == -1)
		print_error(99, "Error:cant write to %s\n", argv[2]);

	while ((bytes_r = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(dest, buffer, bytes_r);
		if (bytes_w == -1)
			print_error(99, "Error:Cant write to %s\n", argv[2]);
	}
	if (bytes_r == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(src) == -1)
		print_error(100, "Error: Can't close fd %d\n", src);
	if (close(dest) == -1)
		print_error(100, "Error: Can't close fd %d\n", dest);

	return (0);
}
