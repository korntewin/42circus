/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:28:34 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 00:23:51 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_in(char c, char const *set, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		st;
	int		end;
	char	*out;

	size = ft_strlen(s1);
	out = (char *)malloc(sizeof(char) * size);
	if (out == NULL)
	{
		return (NULL);
	}
	st = 0;
	end = size - 1;
	size = ft_strlen(set);
	while (is_in(s1[st], set, size) && st < end)
		st++;
	while (is_in(s1[end], set, size) && end >= 0)
		end--;
	size = -1;
	while (++size + st <= end)
		out[size] = s1[size + st];
	out[size] = '\0';
	return (out);
}

/*
int	main(void)
{
	const char	*str = "";
	char		*str1;

	str1 = ft_strtrim(str, "");
	printf("%s", str1);
}
*/
