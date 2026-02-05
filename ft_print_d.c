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

int	ft_print_d(int n)
{
	long	nbr;
	char	c;
	int		len;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		len++;
	}
	if (nbr >= 10)
	{
		len += ft_print_d(nbr / 10);
	}
	c = (nbr % 10) + '0';
	write(1, &c, 1);
	len++;
	return (len);
}
