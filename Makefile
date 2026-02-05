# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 23:00:05 by ciparren          #+#    #+#              #
#    Updated: 2026/02/05 23:00:17 by ciparren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g
AR          = ar rcs
RM          = rm -f

# Lista explícita de archivos (Requisito de la Norma 4.1)
SRCS        = ft_printf.c \
              ft_what_to_print.c \
              ft_print_c.c \
              ft_print_s.c \
              ft_print_d.c \
              ft_print_x.c \
			  ft_main.c
              #ft_print_u.c \
              #ft_print_p.c  

OBJS        = $(SRCS:.c=.o)

# Regla por defecto
all: $(NAME)

# Creación de la librería estática
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS) 

# Compilación de archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza de archivos objeto
clean:
	$(RM) $(OBJS) 

# Limpieza total
fclean: clean
	$(RM) $(NAME)

# Re-compilación completa
re: fclean all 

.PHONY: all clean fclean re