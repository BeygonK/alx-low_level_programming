#include "main.h"
/***
 * create_file - creates a file and write content
 * @filename: the name of the file
 * @text_content: string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, result;
	mode_t file_perm = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		result = write(file, text_content, strlen(text_content));
		if (result == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);

	return (1);
}

