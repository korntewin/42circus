/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:57:43 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/23 17:01:45 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	temp(unsigned int t, char c)
{
	(void)(t);
	return (c + 2);
}

int	main(void)
{
	char	*s;
	char	*o;

	s = "GGWPEZ";
	o = ft_strmapi(s, temp);
	printf("source:%s\n", s);
	printf("destin:%s\n\n", o);
	s = "";
	o = ft_strmapi(s, temp);
	printf("source:%s\n", s);
	printf("destin:%s\n\n", o);
	s = "0qwer0n12";
	o = ft_strmapi(s, temp);
	printf("source:%s\n", s);
	printf("destin:%s\n\n", o);
	s = "aps7f-0078";
	o = ft_strmapi(s, temp);
	printf("source:%s\n", s);
	printf("destin:%s\n\n", o);
}
