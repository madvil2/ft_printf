/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokaimov <kokaimov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:14:39 by kokaimov          #+#    #+#             */
/*   Updated: 2023/11/19 21:19:00 by kokaimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main()
{
	int	count;

	count = 0;
	count = ft_printf("%p", -1);
	ft_printf("count = %i\n", count);
	count = printf("%p", -1);
	printf("count = %i\n", count);
	return (0);
}
