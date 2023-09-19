#include "main.h"

/**
 * print_int : Print integer to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_int(long num)
{

    return (_putString(convert_number(num, 10, 0)));
}

/**
 * print_bin : Print integer as Binary to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_bin(unsigned int num)
{

    return (_putString(convert_number(num, 2, UNSIGNED)));
}

