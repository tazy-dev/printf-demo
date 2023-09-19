#include "main.h"

/**
 * print_unsinged : Print integer as unsigned to console
 *
 * @num : input number
 * Return : The number of digits of the output
 */
int print_unsigned(unsigned long num)
{

    return (_putString(convert_number(num, 10, UNSIGNED)));
}