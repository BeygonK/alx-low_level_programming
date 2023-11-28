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
	FILE *file;
	ssize_t count = 0;
	int c;

	if (filename == NULL)
		return (0);

	while (count < letters && (c = fgetc(file)) != EOF)
	{
		_putchar(c);
		count++;
	}

	fclose(file);
	return (count);
}
