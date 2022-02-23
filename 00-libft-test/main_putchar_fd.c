/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:56:13 by kboonchu          #+#    #+#             */
/*   Updated: 2022/02/23 18:20:43 by kboonchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./test_putchar_fd", O_WRONLY | O_CREAT | O_APPEND, 0777);
	ft_putchar_fd('G', fd);
	ft_putchar_fd('G', fd);
	ft_putchar_fd('W', fd);
	ft_putchar_fd('P', fd);
	close(fd);
}
