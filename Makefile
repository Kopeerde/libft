# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 09:48:58 by kmendes-          #+#    #+#              #
#    Updated: 2022/05/13 15:51:48 by kmendes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c    \
	  ft_strlen.c  ft_memset.c  ft_bzero.c   ft_memcpy.c  ft_strlcpy.c    \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c    \
	  ft_strncmp.c ft_memcmp.c  ft_strnstr.c ft_atoi.c    ft_calloc.c     \
	  ft_strdup.c  ft_substr.c  ft_strjoin.c ft_strtrim.c ft_split.c      \
	  ft_itoa.c	   ft_memmove.c ft_memchr.c  ft_strmapi.c ft_striteri.c   \
	  ft_putnbr_fd.c   ft_putchar_fd.c   ft_putstr_fd.c   ft_putendl_fd.c

BONUS_SRC = ft_lstnew.c    ft_lstadd_back.c  ft_lstlast.c \
			ft_lstsize.c   ft_lstadd_front.c ft_lstiter.c \
			ft_lstdelone.c ft_lstclear.c     ft_lstmap.c

FLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o *.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

bonus: $(NAME)
	gcc $(FLAGS) -c $(BONUS_SRC)
	ar rc $(NAME) *.o
