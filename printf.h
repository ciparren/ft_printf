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
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>  
# include <unistd.h>  
# include <stdlib.h>  

int	ft_printf(const char *format, ...);

int	ft_what_to_print(va_list args, char c);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_p(void *ptr);
int	ft_print_i(int n);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned int n, char *base);

#endif