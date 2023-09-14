#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of its variable arguments.
 *
 * @n: the number of arguments passed to the function.
 *
 * Return: the sum of the arguments, or 0 if the number of arguments is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Define variables */
	unsigned int i;
	int sum = 0;
	va_list args; /* Define a va_list variable to hold the variable arguments. */

	if (n != 0)
	{
		va_start(args, n); /* Initialize the va_list with the variable arguments. */
		for (i = 0; i < n; i++) /* Initialize i and iterate through the arguments. */
		{
			sum += va_arg(args, int); /* Add each argument to the sum. */
		}

		va_end(args); /* Clean up the va_list. */
		return (sum);
	}

	return (0);
}

