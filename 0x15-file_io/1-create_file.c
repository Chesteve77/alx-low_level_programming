#include "main.h"

/**
 * create_file -> creates files
 * @filename: The name of the file to creat.
 * @text_content: A NULL teminated stirng to write the file
 * Description: The created file must have those permissions ->
 * rw--------. If the file already exists, do change the permission
 * Return: if the function fails -1. Otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(0);

	return (1);
}
