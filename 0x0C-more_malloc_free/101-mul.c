#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digit characters
 * @s: The string to be evaluated
 *
 * Return: 0 if a non-digit character is found, 1 otherwise
 */
int is_digit(char *s)
{
    int index = 0;

    while (s[index])
    {
        if (s[index] < '0' || s[index] > '9')
            return (0);
        index++;
    }
    return (1);
}

/**
 * str_length - returns the length of a string
 * @s: The string to evaluate
 *
 * Return: The length of the string
 */
int str_length(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }
    return (length);
}

/**
 * handle_errors - handles errors for the main function
 */
void handle_errors(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - multiplies two positive numbers represented as strings
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always returns 0 (Success)
 */
int main(int argc, char *argv[])
{
    char *num_str1, *num_str2;
    int len1, len2, total_len, i, carry, digit1, digit2, *result, has_non_zero = 0;

    num_str1 = argv[1], num_str2 = argv[2];
    if (argc != 3 || !is_digit(num_str1) || !is_digit(num_str2))
        handle_errors();
    len1 = str_length(num_str1);
    len2 = str_length(num_str2);
    total_len = len1 + len2 + 1;
    result = malloc(sizeof(int) * total_len);
    if (!result)
        return (1);
    for (i = 0; i <= len1 + len2; i++)
        result[i] = 0;
    for (len1 = len1 - 1; len1 >= 0; len1--)
    {
        digit1 = num_str1[len1] - '0';
        carry = 0;
        for (len2 = str_length(num_str2) - 1; len2 >= 0; len2--)
        {
            digit2 = num_str2[len2] - '0';
            carry += result[len1 + len2 + 1] + (digit1 * digit2);
            result[len1 + len2 + 1] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
            result[len1 + len2 + 1] += carry;
    }
    for (i = 0; i < total_len - 1; i++)
    {
        if (result[i])
            has_non_zero = 1;
        if (has_non_zero)
            putchar(result[i] + '0');
    }
    if (!has_non_zero)
        putchar('0');
    putchar('\n');
    free(result);
    return (0);
}

