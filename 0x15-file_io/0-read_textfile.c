#include "main.h"

/**
 * read_textfile - Reads a text file and writes it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and write.
 *
 * Description:
 * This function reads the specified number of letters from the text file named
 * 'filename' and writes them to the standard output (stdout). It returns the
 * number of letters read and written, or 0 on failure.
 *
 * Return: The number of letters read and written, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	read_bytes = read(file_descriptor, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (file_descriptor == -1 || read_bytes == -1 ||
			write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (write_bytes);
}
