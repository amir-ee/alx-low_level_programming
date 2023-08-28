#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer we need to set.
 * @to: String to set.
 */
void set_string(char **s, char *to)
{
    *s = to;
}

