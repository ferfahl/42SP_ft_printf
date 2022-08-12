#include <stdio.h>
#include <stdarg.h>

int test_int(int num_args, ...);

int main(void)
{
    test_int(7, 12, 5, 4);

    return 0;
}

int test_int(int num_args, ...) //number of arguments
{
    va_list args; //variable list -> allows to work with many args, one at the time
    int i;
    int x;
    va_start(args, num_args); //start the 'list' with the 1st argument

    i = 0;
    while (i < num_args)
    {
        x = va_arg(args, int);
        printf("x: %d\n", x);
        i++;
    }
    va_end(args);
    return 0;
}