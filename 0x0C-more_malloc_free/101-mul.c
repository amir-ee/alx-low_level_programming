#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _atoi - convert string to integer
*
* @s: Input
*
* Return: Integer Converted
*/

int _atoi(char *s)
{
	int len;
	int sin;
	unsigned int digit;

	sin = 1;
	digit = 0;

	for (len = 0; s[len] != '\0'; ++len)
	{
		if (s[len] == '-')
			sin *= -1;
		else if (s[len] >= '0' && s[len] <= '9')
		{
			digit = (digit * 10) + (s[len] - '0');
		}
		else if (digit > 0)
		break;
	}

	return (digit * sin);
}

/**
* my_printf - print @s
*
* @s: Input
*
* Return: VOID
*/

void my_printf(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
}

/**
 * print_number - prints an integer
 * @n:.input of function.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

/**
 * main -  multiplies two positive numbers.
 *
 * @argc: input size of @argv
 * @argv: input array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int j, i = 0;

	if (argc < 3)
	{
		my_printf("Error0\n");
		exit(98);
	}

	for (j = 1 ; j < 3; j++)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				my_printf("Error\n");
				exit(98);
			}
			i++;
		}
	}
	print_number((_atoi(argv[1]) * _atoi(argv[2])));
	_putchar('\n');
	return (0);
}
