#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//Libraries
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>
# include <stdarg.h>
# include <string.h>

//Functions
void    ft_print_string(va_list args);
void    search_placeholder(char placeholder, va_list args);
int     ft_printf(const char *format, ...);

#endif