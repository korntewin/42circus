/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:40:46 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/19 23:45:36 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	c;
	int		i;

	s1 = "ABCDEF";
	c = 'A';
	i = 6;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n", i, s1, c, memchr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n\n", i, s1, c, ft_memchr(s1, c, i));
	s1 = "ABCDEF";
	c = 'F';
	i = 6;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n", i, s1, c, memchr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n\n", i, s1, c, ft_memchr(s1, c, i));
	s1 = "ABCDEF";
	c = 'Z';
	i = 10;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n", i, s1, c, memchr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n\n", i, s1, c, ft_memchr(s1, c, i));
	s1 = "ABCDEF";
	c = 'E';
	i = 3;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n", i, s1, c, memchr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%c\nresult:%s\n\n", i, s1, c, ft_memchr(s1, c, i));
}
