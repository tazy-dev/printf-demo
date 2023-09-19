#include "main.h"

/**
 * print_unsinged : Print integer as unsigned to console
 *
 * @ap : Argument list
 * Return : The number of digits of the output
 */
int print_unsigned(va_list ap)
{

    return (_putString(convert_number(va_arg(ap, unsigned int), 10, UNSIGNED)));
}