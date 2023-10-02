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
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd < 0)
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(fd, text_content + i, 1) != 1)
				return (-1);
		}
		close(fd);
	}
	return (1);
}
