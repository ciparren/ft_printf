/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    int  i;
    int total_len;

    i = 0;
    total_len = 0;
    va_start(args, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            i++;
            total_len += ft_what_to_print(args);
            // total_len?
        }
        else
        {
            ft_putchar(format[i]);
            total_len++;
        }
        // i++; ??
    }

    va_end(args);

    return total_len;
}
