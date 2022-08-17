#include "libftprintf.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}