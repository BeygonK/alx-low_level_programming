#include "main.h"
/**
 * append_text_to_file - appends
 * @filename: file
 * @text_content: text
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, res;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		res = write(file, text_content, strlen(text_content));
		if (res == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
