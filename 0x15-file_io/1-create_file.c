#include "main.h"
/**
 * create_file - creates a file and write content
 * @filename: the name of the file
 * @text_content: string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return(-1);

	if (text_content != NULL && fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	if (fclose(file) == EOF)
		return (-1);

	return (1);
}

