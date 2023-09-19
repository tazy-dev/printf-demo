#include "main.h"

/**
 * _putString - add string to the buffer
 * 
 * str : Input string
 * Return : On success 1
*/
int _putString (char *str)
{
    int len = 0;
    while (*str)
    {
        len++;
        _putChar(*str++);
    }
    return (len);
}
/**
 * _putChar - Add char to the buffer and print to console
 *            when the buffer is full 
 * 
 * str : Input character
 * Return : On success 1
*/

int _putChar(char c)
{
    static int i;
    static char buffer[30];
    if (c == BUFFER_FLUSH || i >= 30)
    {
        write(1,buffer,i);
        i = 0;
    }
    if (c != BUFFER_FLUSH)
        buffer[i++] = c;
    return (1);
}