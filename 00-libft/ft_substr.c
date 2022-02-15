/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:04:14 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 22:17:43 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	int		i;

	output = (char *)malloc(sizeof(char) * len);
	if (output == NULL)
		return (NULL);
	i = 0;
	while ((size_t) i < len && s[i + start] != '\0')
	{
		output[i] = s[i + start];
		i++;
	}
	output[i] = '\0';
	return (output);
}
