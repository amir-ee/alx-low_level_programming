#include "main.h"
#include "holberton.h"

/**
 * __exit - Exit the program with an error message based on the error code.
 * @error: The error code to determine the error message.
 * @s: Additional information or filename associated with the error.
 * @fd: File descriptor associated with the error (if applicable).
 *
 * Description:
 * This function handles different error specified by the 'error' code
 * and prints an appropriate error message to . It then exits the program
 * with the provided 'error' code.
 *
 * Return: This function does not return; it exits the program.
 */
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - Entry point for the file copy program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 * This program copies the of one file (specified by argv[1]) to another
 * file (specified by argv[2]). If the prog is called with incorrect usage,
 * it exits with an error message.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
