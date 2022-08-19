#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//Libraries
# include "libft/libft.h"

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>
# include <stdarg.h>
# include <string.h>

//Functions
int ft_print_string(va_list args);
int search_placeholder(char placeholder, va_list args);
int ft_printf(const char *format, ...);

#endif