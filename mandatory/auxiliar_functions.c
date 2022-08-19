#include "libftprintf.h"

int    ft_print_string(va_list args)
{
    char *string;
    printf("test\n");
    string = va_arg(args, char *);
    return (0);
/*     if (string == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }
    else
    {
        ft_putstr_fd(string, 1);
        return (ft_strlen(string));
    } */
}