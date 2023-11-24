/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokaimov <kokaimov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:37:20 by kokaimov          #+#    #+#             */
/*   Updated: 2023/11/24 17:02:00 by kokaimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"
# include <stdint.h>
# include <stdio.h> // udalit
# define HEX "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"
# define DEC "0123456789"

// ft_printf.c
int	ft_printf(const char *format, ...);

// utils.c
int	print_char(char c);
int	print_string(char *str);
int	print_pointer(uintptr_t nbr, int flag);

// ft_putnbr_base.c
int	ft_putnbr_base(long nbr, char *base);

#endif