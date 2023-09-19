#include "main.h"

/**
 * print_unsinged : Print integer as unsigned to console
 *
 * @ap : Argument list
 * @str : String format flags
 * Return : The number of digits of the output
 */
int print_unsigned(va_list ap, str_fmt *str)
{   
    unsigned long num;
    if (str->lng)
    {
        num = (unsigned long) va_arg(ap, unsigned long);
    }
    else if (str->sh)
    {
        num = (unsigned short ) va_arg(ap, unsigned int);
    }else
    {
        num = (unsigned int) va_arg(ap, unsigned int);
    }
    
    

    return (_putString(convert_number(num, 10, UNSIGNED)));
}