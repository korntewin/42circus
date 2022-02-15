/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:03:29 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 09:10:05 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*
int	main(void)
{
	const char	*s = " gwp";
	const char	c = 'z';
	char		*out;

	out = ft_strchr(s, c);
	printf("%s", out);
}
*/
