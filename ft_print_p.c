/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_print_p(unsigned long int *p)
{
	int	len;

	write(1, "0x", 2);
	len += 2;
	len +=ft_print_x((unsigned int)p, "0123456789abcdef");
	return (len);
}
