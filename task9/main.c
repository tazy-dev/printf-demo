
#include "main.h"
#include "_printf.c"

/**
 * _printf - Custom Printf function
 *
 * @format : The input format string containing
 *           format specifiers %,
 * return : the number of printed characters
 */
int _printf(const char *format, ...);

int main(int argc, char const *argv[])
{
    int lenP, len_P;

    // len_P = _printf("Let's try to printf a simple sentance.\n");
    // lenP = printf("Let's try to printf a simple sentance.\n");
    // _printf("Let's try to print%c a simple sentance.\n", 'F');
    // // printf("Let's try to print%c a simple sentance.\n", 'f');
    // _printf("Let's try to printf %% a simple sentance.\n");
    // // printf("Let's try to printf %% a simple sentance.\n");
    // _printf("Let's try to %s a simple sentance.\n", "solve");
    // len_P = _printf("Let's try to %i a simple sentance.\n", -234);
    // len_P = _printf("Let's try to %S a simple sentance.\n", "Best\nSchool");
    // printf("Let's try to %S a simple sentance.\n", "Best\nSchool");
    // lenP = printf("Let's try to %b a simple sentance.\n", 98);
    // printf("%d\n", lenP);

    // _printf("%p\n", &len_P);
    // printf("%p\n", &len_P);
    // printf("%hX\n",100000);
    // _printf("%hX\n",100000);
    // printf("%ld\n",2000);
    // _printf("%ld\n",2000);

    // _printf("Let's try to %s a simple sentance.\n", "Best\nSchool");
    len_P = printf("%#10b\n", 80);
    len_P = _printf("%#10b\n", 80);
    // printf("%6c\n",65);

    // _printf("%20p\n", &len_P);
    // printf("%20p\n", &len_P);

    return 0;
}