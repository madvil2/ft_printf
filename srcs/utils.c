/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokaimov <kokaimov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:36:06 by kokaimov          #+#    #+#             */
/*   Updated: 2023/11/19 21:23:29 by kokaimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		print_char(str[i++]);
	return (i);
}

int	print_pointer(void *ptr)
{
	int	count;

	if (!ptr)
		return (0);
	count = 0;
	return (count);
}
