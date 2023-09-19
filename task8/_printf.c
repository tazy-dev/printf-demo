#include "main.h"
#include "print_functions_radix.c"
#include "print_functions.c"
#include "print_functions_simple.c"
#include "format_specifiers.c"
// Printf Task 0
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
    const char *p , *express;
    char *sval;
    char no_storage[] = "Not Enough Storage";
    int i, result_len = 0;
    str_fmt flags ;

    va_start(ap, format); /* make ap point to 1st unnamed arg */
    for (p = format; *p; p++)
    {
        if (*p != '%')
        {
            result_len += _putChar(*p);
            continue;
        }
        express = p;
        ++p;
        intialize_fmt_str(&flags);
        while (parse_flags(*p,&flags))
        {
            ++p;
        }
        if (parse_modifier(*p, &flags))
            ++p;
        switch (*p)
        {
        case 'c':
            result_len += print_char(ap, &flags);
            break;
        case 'd':case 'i':
            result_len += print_int(ap, &flags);
            break;
        case 'b':
            result_len += print_bin(ap, &flags);
            break;
        case 'u':
            result_len += print_unsigned(ap,&flags);
            break;
        case 'o':
            result_len += print_oct(ap, &flags);
            break;
        case 'x':
            result_len += print_hex(ap, &flags);
            break;
        case 'X':
            result_len += print_HEX(ap, &flags);
            break;
        case '%':
            result_len += print_percentage();
            break;
        case 'p':
            result_len = print_adress(ap, &flags);
            break;
        case 'S':
            result_len = print_str_special(ap, &flags);
            break;
        case 's':
            result_len = print_string(ap, &flags);
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