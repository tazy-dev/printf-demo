#include "main.h"
#include "print_functions_radix.c"
#include "print_functions.c"
#include "print_functions_simple.c"

/**
 * _printf - Custom Printf function
 *
 * @format : The input format string containing
 *           format specifiers %,
 * return : The number of printed characters
 */
int _printf(const char *format, ...)
{
    va_list ap; /* points to each unnamed arg in turn */
    const char *p;
    char *sval;
    char no_storage[] = "Not Enough Storage";
    int i, result_len = 0;


    va_start(ap, format); /* make ap point to 1st unnamed arg */
    for (p = format; *p; p++)
    {
        if (*p != '%')
        {
            result_len += _putChar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'c':
            result_len += print_char(va_arg(ap, int));
            break;
        case 'd':case 'i':
            result_len += print_int((long)va_arg(ap, int));
            break;
        case 'b':
            result_len += print_bin((unsigned int)va_arg(ap, int));
            break;
        case 'u':
            result_len += print_unsigned((unsigned long)va_arg(ap,unsigned int));
            break;
        case 'o':
            result_len += print_oct((unsigned long)va_arg(ap,unsigned  int));
            break;
        case 'x':
            result_len += print_hex((unsigned long)va_arg(ap,unsigned  int));
            break;
        case 'X':
            result_len += print_HEX((unsigned long)va_arg(ap,unsigned  int));
            break;
        case '%':
            result_len += print_percentage();
            break;
        case 's':
            result_len = print_string(va_arg(ap, char *));
            break;
        default:
            putchar(*p);
            break;
        }
    }
    _putChar(-1);
    va_end(ap); /* clean up when done */
    // write(1,result,result_len);
    return (result_len);
}