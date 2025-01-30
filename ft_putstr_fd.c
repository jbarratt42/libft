/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:23:47 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/17 14:51:26 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/*
#include <unistd.h>
#include <fcntl.h>
int	main(void)
{
	int fd = open("tmp", O_RDWR);
	ft_putstr_fd("hello world!", fd);
}
*/
