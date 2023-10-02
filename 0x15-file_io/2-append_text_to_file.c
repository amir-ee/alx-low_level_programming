#include "main.h"

/**
 * append_text_to_file - Appends text content to a file or creates the file.
 * @filename: The name of the file to append to or create.
 * @text_content: The content to append to the file.
 *
 * Description:
 * This function appends the specified text_content to the file named filename
 * or creates the file if it doesn't exist If text_content is NULL, it simply
 * creates an empty file. If the file exists it appends the content to the end
 * of the file. If the file doesn't exist it is created with write permissions.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len])
		len++;
	wr = write(fd, text_content, len);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
