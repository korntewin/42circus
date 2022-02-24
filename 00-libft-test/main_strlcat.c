/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:35:54 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 20:02:05 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	int		sizeout;

	for (int i = 0; i < 9; i++)
	{
		printf("=== Ft ===\n");
		char	dst[10] = "dest";
		src = "src";
		printf("sizein:%d,src:%s,destbefore:%s\n", i, src, dst);
		sizeout = ft_strlcat(dst, src, i);
		printf("sizeout:%d,src:%s,destafter:%s\n", sizeout, src, dst);
		printf("\n");
		printf("=== Original ===\n");
		char	dst2[10] = "dest";
		src = "src";
		printf("sizein:%d,src:%s,destbefore:%s\n", i, src, dst2);
		sizeout = strlcat(dst2, src, i);
		printf("sizeout:%d,src:%s,destafter:%s\n", sizeout, src, dst2);
		printf("\n");
	}
	char dest[30]; memset(dest, 0, 30);
	int	i;
	i = ft_strlcat(dest, "123", 0);
	printf("libfttestter:%d\n", i);
	printf("libftstring:%d\n", strcmp(dest, ""));
}
