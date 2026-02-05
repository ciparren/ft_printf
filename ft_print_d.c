/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>

static void aux(int n, int mod, int *len)
{
    char    c;

    if (n == 0)
    {
        c = (n % 10) + '0';
	    write(1, &c, 1);
    }
    else
    	aux(n / 10, n % 10, len);
	
}


int ft_print_d(int n)
{
    long	nbr;
   	char	c;
    int *len;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
        len++;
		nbr = -nbr;
	}
    aux(n, 0, &len);

    return  (len);
}


// este es mi putnbr

int	ft_putnbr_fd(int n, int fd)
{
	
}