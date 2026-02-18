/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_print_p(void *ptr)
{
	int				len;
	unsigned long	addr;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = 0;
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	len += 2;
	len += ft_print_x(addr, "0123456789abcdef");
	return (len);
}
