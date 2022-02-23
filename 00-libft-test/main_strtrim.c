/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:31:08 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 21:59:49 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str1;
	char	*set;

	str = "";
	set = "";
	str1 = ft_strtrim(str, set);
	printf("set: %s, orig str: %s, trimmed str: %s\n", set, str, str1);
	str = "  GGWP";
	set = "";
	str1 = ft_strtrim(str, set);
	printf("set: %s, orig str: %s, trimmed str: %s\n", set, str, str1);
	str = "  GGWP";
	set = " ";
	str1 = ft_strtrim(str, set);
	printf("set: %s, orig str: %s, trimmed str: %s\n", set, str, str1);
	str = " . GGWP ";
	set = " .";
	str1 = ft_strtrim(str, set);
	printf("set: %s, orig str: %s, trimmed str: %s\n", set, str, str1);
	str = "  GGWP ";
	set = " ";
	str1 = ft_strtrim(str, set);
	printf("set: %s, orig str: %s, trimmed str: %s\n", set, str, str1);
}
