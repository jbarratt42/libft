/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:55:56 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/17 16:14:36 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h"
#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 1;
	n /= 10;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	power10(int p)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (i < p)
	{
		n *= 10;
		i++;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	div;

	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	div = power10(intlen(n) - 1);
	while (div > 0)
	{
		ft_putchar_fd('0' + n / div, fd);
		n -= (n / div) * div;
		div /= 10;
	}
}
