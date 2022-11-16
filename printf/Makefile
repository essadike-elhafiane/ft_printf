# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 18:34:16 by eelhafia          #+#    #+#              #
#    Updated: 2022/11/16 01:22:17 by eelhafia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
RM = rm -f
AR = ar rc
CC = cc -Wall -Wextra -Werror

SRC = ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ) 
	
%.o: %.c ft_printf.h
	$(CC) -c $<
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all
