/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:29:41 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/20 12:34:26 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*dup;

	s1 = "GGWPEZ";
	dup = strdup(s1);
	printf("=== Original ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
	dup = ft_strdup(s1);
	printf("=== Ft ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
	s1 = "";
	dup = strdup(s1);
	printf("=== Original ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
	dup = ft_strdup(s1);
	printf("=== Ft ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
	s1 = ":LFJ1023874-uPJSf;";
	dup = strdup(s1);
	printf("=== Original ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
	dup = ft_strdup(s1);
	printf("=== Ft ===\n");
	printf("source:%s\n", s1);
	printf("dup:%s\n", dup);
}
