#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Program that adds positive numbers provided as command-line arguments.
 *
 * @argc: The number of arguments, including the program name.
 * @argv: An array containing the program arguments.
 *
 * Return: 0 if successful, non-zero otherwise.
 */

int main(int argc, char **argv)
{
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{
		char *current_arg = argv[i];
		char *ptr = current_arg;

		while (*ptr != '\0')
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		res += atoi(current_arg);
	}

	printf("%d\n", res);

	return (0);
}
