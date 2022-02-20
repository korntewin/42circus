/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:12:42 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/20 12:22:01 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*dst;
	int		i;
	int		k;

	i = 10;
	k = 10;
	dst = calloc(10, 3);
	printf("\n=== Original ===\n");
	for (int j = 0; j < k; j++)
		printf("[%d]", dst[j]);
	printf("\n=== FT ===\n");
	dst = ft_calloc(10, 3);
	for (int j = 0; j < k; j++)
		printf("[%d]", dst[j]);
}
