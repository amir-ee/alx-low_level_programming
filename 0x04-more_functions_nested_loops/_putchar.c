#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char num)
{
    return write(1, &num, 1);
}

