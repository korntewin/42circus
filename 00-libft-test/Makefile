# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 21:23:15 by kboonchu          #+#    #+#              #
#    Updated: 2022/02/15 23:39:46 by kboonchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = temp
CC = gcc
CFLAGS = -Wall -Wextra -Werror

clean:
	rm -f temp

test: clean
	@cd ../00-libft && make re
	@$(CC) $(CFLAGS) -lft -L ../00-libft -I ../00-libft -o $(NAME) main_$(fun).c
	@./temp

test-leak: clean
	@cd ../00-libft && make re
	@$(CC) $(CFLAGS) -lft -L ../00-libft -I ../00-libft -o $(NAME) main_$(fun).c
	@leaks --atExit -- ./temp
