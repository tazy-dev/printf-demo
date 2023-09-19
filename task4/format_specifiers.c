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