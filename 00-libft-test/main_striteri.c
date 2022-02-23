/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:42:57 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/23 17:51:37 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	temp(unsigned int t, char *s)
{
	(void)(t);
	*s += 2;
}

int	main(void)
{
	char	*s;
	char	*o;

	s = "GGWPEZ";
	o = ft_strdup(s);
	printf("source:%s\n", o);
	ft_striteri(o, temp);
	printf("destin:%s\n\n", o);
	s = "";
	o = ft_strdup(s);
	printf("source:%s\n", o);
	ft_striteri(o, temp);
	printf("destin:%s\n\n", o);
	s = "0qwer0n12";
	o = ft_strdup(s);
	printf("source:%s\n", o);
	ft_striteri(o, temp);
	printf("destin:%s\n\n", o);
	s = "aps7f-0078";
	o = ft_strdup(s);
	printf("source:%s\n", o);
	ft_striteri(o, temp);
	printf("destin:%s\n\n", o);
}
