/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassane <fhassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:07:22 by fhassane          #+#    #+#             */
/*   Updated: 2024/12/12 20:08:43 by fhassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_print_int(int c);
int	ft_putnbr_hex(unsigned long n);
int	calculate_hex_length(unsigned long n);
int	ft_putptr(uintptr_t ptr);
int	ft_put_unsigned_z(unsigned int nb);
int	ft_putnbr_hex_cap(unsigned long n);

#endif
