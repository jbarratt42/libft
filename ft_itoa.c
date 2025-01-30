/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:01:16 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/17 12:58:59 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include "libft.h"

static size_t	intlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	n /= 10;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	write_digit(char *end_of_string, int n)
{
	if (n > 9)
		write_digit(end_of_string - 1, n / 10);
	*end_of_string = '0' + n % 10;
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*a;
	char	*b;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = intlen(n);
	a = malloc(len + 1);
	if (!a)
		return (0);
	a[len] = 0;
	b = a;
	if (n < 0)
	{
		n = -n;
		*b = '-';
		b++;
		len--;
	}
	write_digit(b + len - 1, n);
	return (a);
}

/*
#include <stdio.h>
int	main(void)
{
	char *a = ft_itoa(INT_MIN);
	printf("%s\n", a);
}
*/
