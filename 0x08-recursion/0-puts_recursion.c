#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a newline.
 * @s: Pointer to the string to be printed
 *
 * Return: void (no explicit return)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

