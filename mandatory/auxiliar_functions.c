/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:06:17 by feralves          #+#    #+#             */
/*   Updated: 2022/08/19 23:40:32 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(va_list args)
{
	int	alpha;

	alpha = va_arg(args, int);
	write(1, &alpha, 1);
	return (1);
}

int	ft_print_string(va_list args)
{
	char	*string;

	string = va_arg(args, char *);
	if (!string)
	{
		return (write(1, "(null)", 6));
	}
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}

int	ft_print_integer(va_list args)
{
	int		number;
	char	*string;

	number = va_arg(args, int);
	string = ft_itoa(number);
	ft_putstr_fd(string, 1);

	return(ft_strlen(string));
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	number;
	char	*string;

	number = va_arg(args, unsigned int);
	string = ft_uitoa(number);
	ft_putstr_fd(string, 1);
	return(ft_strlen(string));
}

int	ft_print_hexadecimal(va_list args, char placeholder)
{
	size_t	number;
	char	*string;
	int		index;

	index = 0;
	number = va_arg(args, unsigned long int);
	string = ft_hex_itoa(number);
	if (placeholder == 'X')
	{
		while (string[index] != '\0')
		{
			string[index] = ft_toupper(string[index]);
			index++;
		}
	}

	ft_putstr_fd(string, 1);
	return(ft_strlen(string));
}

int	ft_print_pointer(va_list args)
{
	void	*pointer;
	char	*string;

	pointer = va_arg(args, void*);
	string = ft_hex_itoa((unsigned long int) pointer);
	if (!pointer)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ft_putstr_fd(string, 1);
	return(ft_strlen(string) + 2);
}
