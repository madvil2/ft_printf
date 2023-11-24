/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokaimov <kokaimov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:18:11 by kokaimov          #+#    #+#             */
/*   Updated: 2023/11/19 21:19:08 by kokaimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_string(va_arg(ap, char *));
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_putnbr_base((long)va_arg(ap, int), "0123456789");
	else if (specifier == 'i')
		count += ft_putnbr_base((long)va_arg(ap, int), "0123456789");
	else if (specifier == 'u')
		write(1, "todo", 4);
	else if (specifier == 'x')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (specifier == '%')
		write(1, "todo", 4);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
