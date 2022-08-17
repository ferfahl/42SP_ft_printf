#include "libftprintf.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void    search_placeholder(char placeholder, va_list args)
{
/*     if (placeholder == 'c')
        ft_print_char(args); */
    if (placeholder == 's')
        ft_print_string(args);
/*     if (placeholder == 'p')
        ft_print_pointer(args);
    if (placeholder == 'd' || placeholder == 'i')
        ft_print_integer(args);
    if (placeholder == 'p')
        ft_print_pointer(args); */
    if (placeholder == '%')
        write(1, "%", 1);    
/* %u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format. */
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int index;

    index = 0;
    while (format[index])
    {
        if (format[index] == '%')
        {
            index++;
            search_placeholder(format[index], args);
        }
        else
            write(1, &format[index], 1);
        index++;
    }
    return 0;
}

int main()
{
    ft_printf("cavalinho %s é o rapidash\n", "ao vento");
    /* printf("cavalinho %d\n", 5);
    printf("cavalinho %x\n", 101010);
    printf("cavalinho %p\n", free);
    printf("cavalinho %%\n"); */
    /* printf("\n%d\n", printf("cavalinho %s rapidão\n", NULL)); */
}

//printf retorna != void -> qtdd de char que escreve
//seg fault no NULL -> tem que escrever o nulo
