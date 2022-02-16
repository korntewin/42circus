# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:45:40 by kboonchu          #+#    #+#              #
#    Updated: 2022/02/16 23:38:45 by kboonchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strchr.c ft_strtrim.c ft_strlen.c ft_substr.c ft_isdigit.c ft_atoi.c ft_isalpha.c ft_isascii.c \
		ft_isalnum.c ft_isprint.c ft_strlcpy.c ft_memset.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_bzero.c \
		ft_memcpy.c
OBJS = ${SRCS:.c=.o}
INCLUDES = libft.h

all: $(NAME)

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
	ar -crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c -I/$(INCLUDES) $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

bonus:

rebonus:

.PHONY: all clean fclean re bonus rebonus
