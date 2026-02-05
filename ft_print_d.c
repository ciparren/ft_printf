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

int ft_print_d(const char *format, ...)
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
            // función fernando dispatch
            ft_what_to_print(format[i]);
            // total_len?
        }
        else
        {
            ft_printchar(format[i]);
            total_len++;
        }
    }



    va_end(args);

    return total_len;
}
