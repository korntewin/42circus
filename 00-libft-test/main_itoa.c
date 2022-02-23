/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:11:48 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/23 16:43:22 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*t;
	int		i;

	i = 0;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = 100;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = -100;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = -111;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = 111;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = 2147483647;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = -2147483648;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
	i = -126407;
	t = ft_itoa(i);
	printf("Numb: %d\n", i);
	printf("ITOA: %s\n\n", t);
}
