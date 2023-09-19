
#include "main.h"
#include "_printf.c"


int main(int argc, char const *argv[])
{
    int lenP, len_P;

    len_P = _printf("Let's try to printf a simple sentance.\n");
    lenP = printf("Let's try to printf a simple sentance.\n");
    _printf("Let's try to print%c a simple sentance.\n", 'F');
    printf("Let's try to print%c a simple sentance.\n", 'f');
    _printf("Let's try to printf %% a simple sentance.\n");
    printf("Let's try to printf %% a simple sentance.\n");
    _printf("Let's try to %s a simple sentance.\n", "solve");
    // len_P = _printf("Let's try to %i a simple sentance.\n", -234);
 

    return 0;
}