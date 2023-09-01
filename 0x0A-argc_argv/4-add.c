#include <stdio.h>
#include <stdlib.h>

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
int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			/* If character is not a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);
	return (0);
}
