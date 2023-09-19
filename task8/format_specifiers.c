#include"main.h"

//get flag
//get width
//getpercision
//get moddifier
//get specofoer

int parse_flags(char f,str_fmt *str)
{
    int found ;

    switch (f)
    {
    case '+':
        str->plus = 1;
        found = 1;
        break;
    case ' ':
        str-> space = 1;
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
