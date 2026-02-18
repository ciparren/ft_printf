/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 23:56:49 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/05 23:56:51 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_what_to_print(va_list args, char c);
int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_p(void *ptr);
int		ft_print_d(int n);
int		ft_print_u(unsigned int n);
int		ft_print_x(unsigned long n, char *base);
void	ft_putchar(int c);

#endif