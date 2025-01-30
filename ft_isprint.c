/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:55 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/12 11:57:24 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (16384);
	else
		return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int	main(void)
{
	unsigned char c;

	for (c=0;c<UCHAR_MAX;c++){
		printf("%3d %4d %4d\n", c, isprint(c), ft_isprint(c));
		if (isprint(c) != ft_isprint(c))
			return (1);
	}
	printf("EOF %4d %4d\n", isprint(EOF), ft_isprint(EOF));
	return (0);
}
*/
