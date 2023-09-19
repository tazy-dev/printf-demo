#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>



#define BUFFER_FLUSH -1
#define LOWERCASE 1
#define UNSIGNED 2


//main Functiond
int _printf(const char *format,...);



// _buffer.c module
int _putString(char *);
int _putChar(char );

//print_functions.c file
int print_char(char);
int print_percentage();
int print_string(char *str);


//print_functions_radix.c file

int print_int(long );

//utils.c file

char  *convert_number (long int , int ,int);


#endif