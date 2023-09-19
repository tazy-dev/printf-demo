//isdigit
// strlen
// convert
// intialize flags
// specofer function
#include "main.h"
/**
 * _isdigit - checks if it is an integer
 * 
 * @num : Number to be checked
 * Return : 1 if digit , 0 other
*/
int _isdigit (int num)
{
    return (num >= '0' && num <= '9');
}

/**
 * _strlen - Calc the length of a string
 * 
 * @str : Input String
 * Return : the length of a string
*/
int _strlen (char *str)
{
    int len = 0;
    while (*str++)
    {
        len++;
    }
    
    return (len);
}
/**
 * convert_number - Convert a number to a string
 * 
 * @num : Number to be converted
 * @base : Decimal,octal,hexa or binary
 * Return : pointer to the resulting string
 * 
*/
char  *convert_number (long int num, int base, int check)
{
    static char *conv_table;
    static char res_buf[64];
    unsigned long int n = num;
    char sign = 0;
    char * ptr;
    if (!(check & UNSIGNED) && num < 0)
    {
        n = - num;
        sign = '-';
    }
    conv_table = check & LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
    ptr = &res_buf[63];
    *ptr = '\0';
    do
    {
        *--ptr = conv_table[n % base];
        n /= base;
    } while (n != 0);
    if (sign)
    {
        *--ptr = sign ;
    }
    
    
    return (ptr);
}

void intialize_fmt_str(str_fmt *s)
{
    s->sign = 0;
    s->plus= 0;
    s->space = 0;
    s->hash= 0;
    s->zero = 0;
    s->minus = 0;
    s->width = 0;
    s->percesion= UINT_MAX;
    s->lng = 0;
    s->sh = 0;
}