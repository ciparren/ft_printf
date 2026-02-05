/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_to_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 23:28:31 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 23:28:35 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_what_to_print(va_list args, char c)
{
	int len;

	len = 0;
	if (c == '%')
	{
		write(1, "%", 1);
		len++;
	}
	else if (c == 'c')
	{
		len = ft_print_c(va_arg(args, int));
	}
	else if (c == 's')
	{
		len = ft_print_s(va_arg(args, char *));
	}
	else if (c == 'p')
	{
		len = ft_print_p(va_arg(args, void *));
	}
	else if (c == 'd' || c == 'i')
	{
		len = ft_print_d(va_arg(args, int));
	}
	else if (c == 'u')
	{
		len = ft_print_u(va_arg(args, unsigned int));
	}
	else if (c == 'x')
	{
		len = ft_print_x(va_arg(args, unsigned int), "0123456789abcdef");
	}
	else if (c == 'X')
	{
		len = ft_print_x(va_arg(args, unsigned int), "0123456789ABCDEF");
	}
	return (len);
}