/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:08:06 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/20 00:16:03 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*c;
	int		i;

	s1 = "ABCDEF";
	c = "A";
	i = 6;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "ABCDEF";
	c = "F";
	i = 6;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "ABCDEF";
	c = "CDE";
	i = 10;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "ABCDEF";
	c = "GGWP";
	i = 3;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "ABCDEF";
	c = "";
	i = 3;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "";
	c = "ABC";
	i = 3;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
	s1 = "";
	c = "";
	i = 3;
	printf("=== Original ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n", i, s1, c, strnstr(s1, c, i));
	printf("=== Ft ===\n");
	printf("size:%d\ns1:%s\nc:%s\nresult:%s\n\n", i, s1, c, ft_strnstr(s1, c, i));
}
