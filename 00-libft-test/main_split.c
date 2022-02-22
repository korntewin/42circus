/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:52:45 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/22 22:04:40 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	c;
	char	**test;

	src = "GGWP,EZJJ,,,TEST Na krub";
	c = ',';
	test = ft_split(src, c);
	printf("Total str:%s\n", src);
	printf("Split str:%c\n", c);
	printf("str1:%s\n", test[0]);
	printf("str2:%s\n", test[1]);
	printf("str3:%s\n", test[2]);
	printf("str3:%s\n\n", test[3]);
	src = "";
	c = ' ';
	test = ft_split(src, c);
	printf("Total str:%s\n", src);
	printf("Split str:%c\n", c);
	printf("str1:%s\n", test[0]);
	src = "T  ";
	c = ' ';
	test = ft_split(src, c);
	printf("Total str:%s\n", src);
	printf("Split str:%c\n", c);
	printf("str1:%s\n", test[0]);
	printf("str2:%s\n", test[1]);
}
