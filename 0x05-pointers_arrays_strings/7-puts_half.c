#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (int i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (int n = (len - 1) / 2 + 1; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}

