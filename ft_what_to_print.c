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
#include <stdarg.h>


int ft_what_to_print(va_list args, char c)
{
    int len;

    len = 0;
    if(c == '%')
    {
        write(1, '%', 1);
        len++;
    }
    else if( c == 'c')
    {
        ft_print_c(va_arg(args, int));
        // len ?
    }
    else if(c == 's')
    {
        ft_print_s(va_arg(args, char *));
        // len ??
    }
    else if(c == 'p')
    {
        ft_printp(va_arg(args, void *));
        // len ??
    }
    else if(c == 'd' || c == 'i')
    {
        ft_print_d(va_arg(args, int));
        // len ??
    }
    else if(c == 'u')
    {
        ft_print_u(va_arg(args, unsigned int));
        // len ??
    }
    else if(c == 'x')
    {
        ft_print_x(va_arg(args, unsigned int), "0123456789abcdef");
        // len ??
    }
    else if(c == 'X')
    {
        ft_print_x(va_arg(args, unsigned int), "0123456789ABCDEF");
        // len ??
    }

    return  (len);
}