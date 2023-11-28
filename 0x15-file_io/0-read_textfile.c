#include "main.h"
/**
 * read_textfile - reads the text file
 * @filename: the name to reaad
 * @letters: number of letters to read and print
 *
 * Return: the actual number it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytes_r, bytes_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_r = read(file, buffer, letters);
	if (bytes_r == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1 || (ssize_t)(bytes_r != (ssize_t)bytes_w))
	{
		free(buffer);
		close(file);
	}

	free(buffer);
	close(file);

	return (bytes_w);
}
