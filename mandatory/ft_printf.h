/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:06:31 by feralves          #+#    #+#             */
/*   Updated: 2022/08/19 23:36:22 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int	ft_print_char(va_list args);
int	ft_print_hexadecimal(va_list args, char placeholder);
int	ft_print_integer(va_list args);
int	ft_print_pointer(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_string(va_list args);
int	search_placeholder(char placeholder, va_list args);
int	ft_printf(const char *format, ...);


#endif
