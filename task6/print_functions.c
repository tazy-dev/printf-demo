#include "main.h"
#include "_buffer.c"
#include "utils.c"

/**
 * print_char : Print character to console
 *
 * @c : input character
 * Return : On success (1)
 */
int print_char(char c)
{
    return (_putChar(c));
}

/**
 * print_percentage : Print % to console
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
 * @str : input string
 * Return : The length of the string
 */
int print_string(char *str)
{
    return (_putString(str));
}

/**
 * print_str_special : Print string along with non-printable
 *                     as hexa to console
 *
 * @str : input string
 * Return : The length of the string
 */
int print_str_special(char *str)
{
    int len = 0;
    char *non_printable;
    for (;*str; str++)
    {
        if ((*str > 0 && *str < 32) || *str >= 127){
                len += 2;
                _putChar('\\');
                _putChar('x');
            non_printable = convert_number(*str,16,UNSIGNED);
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
            len += _putChar(*str);
        }
    }
    return (len);
}

/**
 * print_address : Print address of a variable  to console
 *
 * @addr : Address as a num
 * Return : The length of the resulting string
 */

int print_adress(unsigned long int addr)
{
    char *ptr;

    ptr = convert_number(addr, 16, UNSIGNED | LOWERCASE);
    *--ptr = 'x';
    *--ptr = '0';
    return (_putString(ptr));

}