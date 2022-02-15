/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:24:19 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/15 23:52:46 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dst;
	int		size;
	size_t	srcsize;

	src = "ggwp";
	size = 10;
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	// =====
	src = "";
	size = 10;
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	// =====
	src = "GGWPEZJING";
	size = 5;
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	// =====
	src = "GG";
	size = 5;
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	// =====
	src = "GGWP";
	size = 0;
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = (char *) malloc(sizeof(char) * size);
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	// =====
	src = "GGWP";
	size = 0;
	dst = NULL;
	srcsize = strlcpy(dst, src, size);
	printf("=== Original ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
	free(dst);
	dst = NULL;
	srcsize = ft_strlcpy(dst, src, size);
	printf("=== Ft ===\n");
	printf("dstsize:%d,srcsize:%ld,src:%s,dst:%s\n", size, srcsize, src, dst);
}
