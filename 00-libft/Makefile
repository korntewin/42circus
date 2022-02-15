# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:45:40 by kboonchu          #+#    #+#              #
#    Updated: 2022/02/15 22:30:56 by kboonchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strchr.c ft_strtrim.c ft_strlen.c ft_substr.c ft_isdigit.c ft_atoi.c
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
