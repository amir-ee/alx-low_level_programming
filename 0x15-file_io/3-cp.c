#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Create a buffer for reading from a file.
 * @file: The name of the file associated with the buffer (for error message).
 *
 * Description:
 * This function allocates a buffer of size 1024 bytes for reading from a file.
 * If the allocation fails, it prints an error message to STDERR and exits with
 * an error code.
 *
 * Return: A pointer to the allocated buffer on success, or exits on failure.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close a file descriptor and handle errors.
 * @fd: The file descriptor to close.
 *
 * Description:
 * This function to close the given file descriptor 'fd'. If the closing
 * operation fails, it prints an error to STDERR and exits with an error
 * code.
 *
 * Return: None. It exits on error.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of one file to another
 * @argc: the number of arguments
 * @argv: an array containing the arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
	}

	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
