#include "main.h"
#include "_buffer.c"

/**
 * print_char : Print character to console
 *
 * @c : input character
 * Return : On success (1)
 */
int print_char(char c)
{
    return (_putChar(c));
}

/**
 * print_percentage : Print % to console
 *
 * Return : On success (1)
 */
int print_percentage()
{
    return (_putChar('%'));
}

/**
 * print_string : Print string to console
 *
 * @str : input string
 * Return : The length of the string
 */
int print_string(char *str)
{
    return (_putString(str));
}
