#include "main.h"
#include "utils.c"

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
