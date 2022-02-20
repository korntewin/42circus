/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:47:26 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/20 12:52:07 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "GGWP";
	s2 = "EZ";
	s3 = ft_strjoin(s1, s2);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("s3:%s\n\n", s3);
	free(s1);
	free(s2);
	free(s3);
	s1 = "";
	s2 = "EZ";
	s3 = ft_strjoin(s1, s2);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("s3:%s\n\n", s3);
	free(s1);
	free(s2);
	free(s3);
	s1 = "GGWP";
	s2 = "";
	s3 = ft_strjoin(s1, s2);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("s3:%s\n\n", s3);
	free(s1);
	free(s2);
	free(s3);
	s1 = "";
	s2 = "";
	s3 = ft_strjoin(s1, s2);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("s3:%s\n\n", s3);
	free(s1);
	free(s2);
	free(s3);
}
