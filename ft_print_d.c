/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 23:56:00 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/05 23:56:03 by ciparren         ###   ########.fr       */
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

int	ft_print_d(int n)
{
	unsigned long long	nbr;
	int					len;

	len = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = -(long long)n;  // Seguro para INT_MIN (usando long long)
		len++;
	}
	else
		nbr = n;
	len += ft_print_unsigned_long_long(nbr);
	return (len);
}
