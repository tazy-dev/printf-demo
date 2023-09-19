#include "main.h"

// get flag
// get width
// getpercision
// get moddifier
// get specofoer
/**
 * parse_flags : Update flags structure based on flag
 *
 * @f : flag
 * @str : The flags stucture
 *
 * Return : On finding flag (1)
 */
int parse_flags(char f, str_fmt *str)
{
    int found;

    switch (f)
    {
    case '+':
        str->plus = 1;
        found = 1;
        break;
    case ' ':
        str->space = 1;
        found = 1;
        break;
    case '#':
        str->hash = 1;
        found = 1;
        break;
    default:
        found = 0;
        break;
    }
    return (found);
}

/**
 * parse_modifier : Determine the length flags 
 *
 * @m : modufier
 * @str : The flags stucture
 *
 * Return : On finding flag (1)
 */
int parse_modifier(char m, str_fmt *str)
{
    int found;

    switch (m)
    {
    case 'l':
        str->lng = 1;
        found = 1;
        break;
    case 'h':
        str->sh = 1;
        found = 1;
        break;
    default:
        found = 0;
        break;
    }
    return (found);
}

/**
 * parse_width : Update witdth in flags structure
 *
 * @w : pointer to the width value or *
 * @ap : argument list
 * @str : The flags stucture
 *
 * Return : On finding flag (1)
 */
const char *parse_width(const char *w, va_list ap, str_fmt *str)
{
    int width;

    if (*w == '*')
    {
        width = va_arg(ap, int);
        w++;
    }
    else
    {
        while (_isdigit(*w))
        {
            width = width * 10 + (*w++ - '0');
        }
    }
    str->width = width;
    return (w);
}

/**
 * parse_percision : Update percision in flags structure
 *
 * @p : pointer to the percision value or *
 * @ap : argument list
 * @str : The flags stucture
 *
 * Return : On finding flag (1)
 */