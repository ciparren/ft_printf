/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

static int	ft_print_unsigned_long_long(unsigned long long n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_print_unsigned_long_long(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	len++;
	return (len);
}

int	ft_print_u(unsigned int n)
{
	return (ft_print_unsigned_long_long((unsigned long long)n));
}
