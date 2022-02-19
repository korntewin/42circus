/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:52:35 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/19 23:53:11 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = "ABC";
	s2 = "AB";
	printf("=== Original ===\n");
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, 3));
	printf("=== FT ===\n");
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, 3));
	s1 = "AB";
	s2 = "ABC";
	printf("=== Original ===\n");
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, 3));
	printf("=== FT ===\n");
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, 3));
	s1 = "";
	s2 = "ABC";
	printf("=== Original ===\n");
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, 3));
	printf("=== FT ===\n");
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, 3));
	s1 = "AB";
	s2 = "";
	printf("=== Original ===\n");
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, 3));
	printf("=== FT ===\n");
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, 3));
	s1 = "";
	s2 = "";
	printf("=== Original ===\n");
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, 3));
	printf("=== FT ===\n");
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, 3));
	s1 = "AB";
	s2 = "ABC";
	i = 10;
	printf("=== Original ===\n");
	printf("comp size:%d\n", i);
	printf("s1:%s,s2:%s,comp:%d\n", s1, s2, memcmp(s1, s2, i));
	printf("=== FT ===\n");
	printf("comp size:%d\n", i);
	printf("s1:%s,s2:%s,comp:%d\n\n", s1, s2, ft_memcmp(s1, s2, i));
}
