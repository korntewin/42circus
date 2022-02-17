/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:32:49 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/17 21:55:09 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	for (int i = 0; i < 3; i++)
	{
		char	cs[6] = "abcde";
		char	*src;
		char	*dst;

		printf("i: %d\n", i);
		if (i == 0)
		{
			printf("original memmove\n");
			src = &cs[0];
			dst = &cs[2];
			dst = memmove(dst, src, 6);
			printf("src:%s,dst:%s\n", cs, dst);
		}
		else
		{
			printf("ft memmove\n");
			src = &cs[0];
			dst = &cs[2];
			dst = ft_memmove(dst, src, 6);
			printf("src:%s,dst:%s\n", cs, dst);
		}
	}
}
