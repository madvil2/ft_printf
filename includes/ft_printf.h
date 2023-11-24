/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokaimov <kokaimov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:37:20 by kokaimov          #+#    #+#             */
/*   Updated: 2023/11/19 21:23:21 by kokaimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"
# include <stdio.h> // udalit

// ft_printf.c
int	ft_printf(const char *format, ...);

// utils.c
int	print_char(char c);
int	print_string(char *str);
int	print_pointer(void *ptr);

// ft_putnbr_base.c
int	ft_putnbr_base(long nbr, char *base);

#endif