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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>  // Para va_list, va_start, va_arg, va_end [cite: 3]
# include <unistd.h>  // Para la función write [cite: 3]
# include <stdlib.h>  // Para malloc y free (si los necesitas) [cite: 3]

/*
** Función principal
*/
int	ft_printf(const char *format, ...);

/*
** Funciones auxiliares (Dispatcher y printers)
** Recuerda que deben devolver int para contar los caracteres impresos.
*/
void	ft_what_to_print(va_list args, char format);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_p(void *ptr);
int	ft_print_i(int n);
int	ft_print_u(unsigned int n);
int	ft_print_h(unsigned int n, char format);

#endif