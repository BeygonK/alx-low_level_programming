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
	char *buffer;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	c = read(a, buffer, letters);
	b = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(a);
	return (b);
}
