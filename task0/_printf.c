#include "main.h"
#include "print_functions.c"

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
    const char *p;
    char *sval;
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