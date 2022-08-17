#include "libftprintf.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void    ft_print_string(va_list args)
{
    char *string;

    string = va_arg(args, char *);
    ft_putstr_fd(string, 1);
}