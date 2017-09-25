#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 16:20:06 by vtiterin          #+#    #+#              #
#    Updated: 2016/11/22 16:20:08 by vtiterin         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SOURCES =	ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
			ft_strcmp.c ft_bzero.c ft_memmove.c ft_strlen.c \
			ft_strcpy.c ft_strncpy.c ft_memccpy.c ft_toupper.c \
			ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_tolower.c ft_strstr.c ft_strdup.c \
			ft_strnstr.c ft_atoi.c ft_strlcat.c ft_isalpha.c \
			ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
			ft_putstr.c ft_putchar.c ft_memalloc.c ft_memdel.c \
			ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
			ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
			ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
			ft_strsplit.c ft_itoa.c ft_putendl.c ft_putnbr.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_lstmap.c ft_lstnew.c ft_lstiter.c ft_lstdelone.c \
			ft_lstdel.c ft_lstadd.c ft_putnbr_fd.c get_next_line.c 

OBJECTS =	$(subst .c,.o,$(SOURCES))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECT): $(SOURCES)
	gcc -Wall -Wextra -Werror -c $(SOURCES)

clean:
	/bin/rm -f $(OBJECTS) *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
