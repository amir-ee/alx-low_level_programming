#include "main.h"

/**
 * more_numbers - Prints multiple lines of numbers from 0 to 14.
 *
 * Return: None.
 */
void more_numbers(void)
{
    int line, num;

    for (line = 0; line < 10; line++)
    {
        for (num = 0; num <= 14; num++)
        {
            if (num > 9)
            {
                _putchar(num / 10 + '0'); // Print tens digit
            }
            _putchar(num % 10 + '0'); // Print ones digit
        }
        _putchar('\n'); // Move to the next line
    }
}

