/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:57:59 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/03 14:58:01 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>

int ft_printf_s(va_list args)
{
    char    *str;

    str = va_arg(args, char *);
    write(1, &str, ft_strlen(str));

    return ft_strlen(str);
}
