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
	int fd = 0, wr = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	if (text_content && *text_content)
	{
		while (text_content[len++])
			;
		wr = write(fd, text_content, len - 1);
		if (wr < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
