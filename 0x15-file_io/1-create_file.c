#include "main.h"

/**
 * create_file - Creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Description:
 * This function creates a file with the specified name 'filename' and writes
 * the text content 'text_content' to it. If the file already exists, it is
 * truncated. If 'text_content' is NULL, an empty file is created.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd == -1)
		return (-1);

	while (*text_content)
	{
		res = write(fd, text_content, 1);

		if (res == -1)
		{
			close(fd);
			return (-1);
		}

		text_content++;
	}

	return (1);
}
