#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program that prints its name, followed by a new line.
 *
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (successful)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);


	return (0);
}
