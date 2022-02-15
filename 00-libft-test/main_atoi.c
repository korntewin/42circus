/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:38:39 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 22:47:06 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "-100";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "0";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "100";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = " +100";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = " +-100";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = " \n\v\r\f\t100";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "2147483647";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "-2147483648";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "  -2147g483648";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "  -2147 483648";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
	str = "-2147483649";
	printf("str: %s, int: %d\n", str, ft_atoi(str));
}
