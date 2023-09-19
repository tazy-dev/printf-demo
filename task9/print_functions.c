#include "main.h"
#include "_buffer.c"
#include "utils.c"

/**
 * print_char : Print character to console
 *
 * @ap : argument list
 * @str : String format flags
 * Return : On success (1)
 */
int print_char(va_list ap , str_fmt *str)
{
    char padding = ' ';
    int fill = 1 ;
    while (fill < str->width)
    {
         _putChar(padding);
        fill++;
    }
    _putChar(va_arg(ap, int));
    return (str->width);
}

/**
 * print_percentage : Print % to console
 * @ap : argument list
 * @str : String format flags
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
 * @ap : argument list
 * @str : String format flags
 * 
 * Return : The length of the string
 */
int print_string(va_list ap , str_fmt *str)
{
    
    char padding = ' ';
    char *text = va_arg(ap, char *);
    int text_len = _strlen(text), fill;

    if (text_len >= str->width)
         return (_putString(text));
    else
    {
        fill = str->width - text_len;
        while (fill--)
        {
            _putChar(padding);
        }
        _putString(text);
         return (str->width);
        /* code */
    }
    
    
   
}

/**
 * print_str_special : Print string along with non-printable
 *                     as hexa to console
 *
 * @ap : argument list
 * @str : String format flags
 * 
 * Return : The length of the string
 */
int print_str_special(va_list ap , str_fmt *str)
{
    int len = 0;
    char *s = va_arg(ap, char *);
    char *non_printable;

    for (;*s; s++)
    {
        if ((*s > 0 && *s < 32) || *s >= 127){
                len += 2;
                _putChar('\\');
                _putChar('x');
            non_printable = convert_number(*s,16,UNSIGNED);
            if (non_printable[1])
            {
                len += _putString(non_printable);
            }else
            {
                _putChar('0');
                _putChar(non_printable[0]);
                len =+2;
            }
            
            
        }else{
            len += _putChar(*s);
        }
    }
    return (len);
}

/**
 * print_address : Print address of a variable  to console
 *
 * @ap : argument list
 * @str : String format flags
 * 
 * Return : The length of the resulting string
 */

int print_adress(va_list ap, str_fmt *str)
{
    char *ptr;
    char padding = ' ';
    ptr = convert_number(va_arg(ap, unsigned long int), 16, UNSIGNED | LOWERCASE);
    *--ptr = 'x';
    *--ptr = '0';
    int text_len = _strlen(ptr), fill;
    if (text_len >= str->width)
    {
        return (_putString(ptr));
    }else
    {
        fill = str->width - text_len;
        while (fill--)
        {
            // _putChar(padding);
            *--ptr = padding;
        }
        return (_putString(ptr));
    }
    
    
    

}