/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:27:29 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/24 20:09:44 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	long long	i;
	long long	d;
	long long	s;
	long long	dstsize2;

	d = (long long)ft_strlen(dst);
	s = (long long)ft_strlen(src);
	dstsize2 = (long long)dstsize;
	if (dstsize2 < d)
		return (dstsize2 + s);
	i = 0;
	while (src[i] != '\0' && i + d < dstsize2 - 1)
	{
		dst[i + d] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	if (dstsize2 < d)
		d = dstsize2;
	return ((size_t)((long long)ft_strlen(src) + d));
}
