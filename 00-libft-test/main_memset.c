/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:54:25 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/16 14:04:16 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *c;

	printf("Ft\n");
	c = (char *) malloc(sizeof(char) * 10);
	c = ft_memset(c, 49, 10);
	for (int i = 0; i < 10; i++)
		printf("%c ", c[i]);
	printf("\nstr:%s", c);
	free(c);
	printf("\n");
	printf("Orig\n");
	c = (char *) malloc(sizeof(char) * 10);
	c = memset(c, 49, 10);
	for (int i = 0; i < 10; i++)
		printf("%c ", c[i]);
	printf("\nstr:%s", c);
	free(c);
}
