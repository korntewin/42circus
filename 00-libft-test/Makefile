# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 21:23:15 by kboonchu          #+#    #+#              #
#    Updated: 2022/02/23 22:45:16 by kboonchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = temp
CC = gcc
CFLAGS = -Wall -Wextra -Werror

clean:
	rm -f temp

test: clean
	@make bonus -C ../00-libft
	@$(CC) $(CFLAGS) -lft -L ../00-libft -I ../00-libft -o $(NAME) main_$(fun).c
	@./temp | cat -e

test-leak: clean
	@make bonus -C ../00-libft
	@$(CC) $(CFLAGS) -lft -L ../00-libft -I ../00-libft -o $(NAME) main_$(fun).c
	@leaks --atExit -- ./temp
