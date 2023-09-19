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

/**
 * print_oct : Print integer as octal to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_oct(unsigned long num)
{

    return (_putString(convert_number(num, 8, UNSIGNED)));
}

/**
 * print_hex : Print integer as hexa lowe to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_hex(unsigned long num)
{

    return (_putString(convert_number(num, 16, UNSIGNED | LOWERCASE)));
}

/**
 * print_HEX : Print integer as hex upper to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_HEX(unsigned long num)
{

    return (_putString(convert_number(num, 16, UNSIGNED)));
}
