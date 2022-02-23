/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:41:11 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/17 23:03:13 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[6] = "ABCCD";
	char		*out;
	char		c;

	c = 'C';
	printf("=== Ft ===\n");
	out = ft_strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n", str, c, out);
	printf("=== Original ===\n");
	out = strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n\n", str, c, out);
	c = 'Z';
	printf("=== Ft ===\n");
	out = ft_strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n", str, c, out);
	printf("=== Original ===\n");
	out = strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n\n", str, c, out);
	c = 'D';
	printf("=== Ft ===\n");
	out = ft_strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n", str, c, out);
	printf("=== Original ===\n");
	out = strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n\n", str, c, out);
	c = 'A';
	printf("=== Ft ===\n");
	out = ft_strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n", str, c, out);
	printf("=== Original ===\n");
	out = strrchr(str, c);
	printf("str:%s,chr:%c,output:%s\n\n", str, c, out);
}
