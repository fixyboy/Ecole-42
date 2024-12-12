/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassane <fhassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:52:43 by fhassane          #+#    #+#             */
/*   Updated: 2024/12/12 20:19:56 by fhassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checksym(va_list args, const char sym)
{
	int	i;

	i = 0;
	if (sym == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (sym == 'd' || sym == 'i')
		i = ft_print_int(va_arg(args, int));
	else if (sym == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (sym == 'p')
		i = ft_putptr(va_arg(args, uintptr_t));
	else if (sym == 'u')
		i = ft_put_unsigned_z(va_arg(args, unsigned int));
	else if (sym == '%')
		i = ft_putchar('%');
	else if (sym == 'x')
		i = ft_putnbr_hex(va_arg(args, unsigned long));
	else if (sym == 'X')
		i = ft_putnbr_hex_cap(va_arg(args, unsigned long));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		return_value;
	va_list	args;
	int		i;

	i = 0;
	return_value = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			return_value = return_value + ft_checksym(args, format[i + 1]);
			i++;
		}
		else
			return_value = return_value + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}
