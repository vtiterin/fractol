# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/02 12:22:29 by vtiterin          #+#    #+#              #
#    Updated: 2016/12/02 12:22:31 by vtiterin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fractol
GCC		= gcc
WWW		= -Wall -Wextra -Werror
SRC		= main.c mandelbrot.c julia.c myfract.c keyhooks.c color1.c mouse_hook.c \
			func_julia.c hooks.c color2.c ft_func.c keyhooks2.c keyhooks3.c
OBJ		= $(SRC:.c=.o)
LIBFT	= ./libft/libft.a
LIBINC	= -I./libft
LIBLINK	= -L./libft -lft
SRCS 	= ./srcs/
INC		= ./includes/
IGRAPH  =   -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL \
            -framework AppKit

all: libft $(NAME)

%.o:$(SRCS)%.c
	$(GCC) $(WWW) $(LIBINC) -I $(INC) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): $(OBJ)
	$(GCC) $(WWW) $(IGRAPH) $(LIBLINK) -o $(NAME) $(OBJ)

clean: cleanlibft
	rm -rf $(OBJ)

cleanlibft:
	make clean -C ./libft 

fclean: clean
	rm -rf $(NAME) $(LIBFT)

re: fclean all
