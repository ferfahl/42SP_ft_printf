/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:19:50 by feralves          #+#    #+#             */
/*   Updated: 2022/08/19 23:15:51 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_counter(size_t number);
static void	ft_write(int size, char *string, size_t n);

char	*ft_hex_itoa(size_t n)
{
	int		size;
	char	*string;

	size = 0;
	size = (ft_counter(n));
	string = malloc(size + 1);
	if (!string)
		return (NULL);
	string[size] = '\0';
	ft_write(size, string, n);
	return (string);
}

static int	ft_counter(size_t number)
{
	int	count;

	count = 1;
	while (number > 15)
	{
		number = number / 16;
		count++;
	}
	return (count);
}

static void	ft_write(int size, char *string, size_t n)
{
	while (size > 0)
	{
		if ((n % 16) > 9)
			string[size - 1] = 'a' + (n % 16) - 10;
		else
			string[size - 1] = '0' + (n % 16);
		n = n / 16;
		size--;
	}
}
