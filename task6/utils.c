//isdigit
// strlen
// convert
// intialize flags
// specofer function
#include "main.h"
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