/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:54:25 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/16 13:57:06 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *c;

	c = (char *) malloc(sizeof(char) * 10);
	c = ft_memset(c, 48, 10);
	for (int i = 0; i < 10; i++)
		printf("%c ", c[i]);
	free(c);
}
