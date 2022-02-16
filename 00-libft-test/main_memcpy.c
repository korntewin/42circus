/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:49:30 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/17 00:12:24 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[10] = "ggwpez";
	char	src[4] = "GGW";
	char	*dsttest;

	printf("orginal\n");
	printf("dst before:%s,", dst);
	dsttest = memcpy(dst, src, 10);
	printf("dst after:%s,src:%s\n\n", dsttest, src);
	printf("ft\n");
	char	dst2[10] = "ggwpez";
	char	src2[4] = "GGW";

	printf("dst before:%s,", dst2);
	dsttest = ft_memcpy(dst2, src2, 10);
	printf("dst after:%s,src:%s\n", dsttest, src2);
}
