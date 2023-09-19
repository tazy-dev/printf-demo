#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>


#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1
#define LOWERCASE 1
#define UNSIGNED 2

// #define PARAMS {0,0,0,0,0,0,0,0,0,0}


/**
 * struct string_format : Flags amd modifiers structure
 * 
 * @signed : signed(0) or unsigned(1).
 * 
 * @plus : Plus flag
 * @spc : Space flag
 * @hash :Hashtag flag
 * @minus : Minus flag
 * @ zero : zero flag
 * 
 * @width : Variable minimum width
 * @percision : string length , number of digits, number
 *              of fractional digits
 * 
 * @lng : long modifier 
 * @sh : Short modifier
 * 
 * Description : This structure handels the various 
 *               flags , modifiers and length that preceed
 *               the specifier and affect the result
 * 
 */
typedef struct string_fornat {
    unsigned int sign;
    unsigned int plus;
    unsigned int space;
    unsigned int hash;
    unsigned int minus ;
    unsigned int zero;
    unsigned int width;
    unsigned int percesion;
    unsigned int lng;
    unsigned int sh;

} str_fmt;

//main Functiond
int _printf(const char *format,...);



// _buffer.c module
int _putString(char *);
int _putChar(char );

//print_functions.c file
int print_char(va_list  , str_fmt *);
int print_percentage();
int print_string(va_list  , str_fmt *);
int print_str_special(va_list  , str_fmt *);
int print_adress(va_list  , str_fmt *);

//print_functions_radix.c file
int print_hex(va_list  , str_fmt *);
int print_bin(va_list  , str_fmt *);
int print_HEX(va_list  , str_fmt *);
int print_int(va_list  , str_fmt *);
int print_oct(va_list  , str_fmt *);

//print_functions_simple.c file
int print_unsigned(va_list, str_fmt *);

//utils.c file
int _isdigit (int );
int _strlen (char *);
char  *convert_number (long int , int ,int);
void intialize_fmt_str(str_fmt *);

//format_specifiers.c
int parse_flags(char ,str_fmt *);
int parse_modifier(char , str_fmt *);
#endif