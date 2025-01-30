/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:55 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/12 11:39:39 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
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
		printf("%3d %4d %4d\n", c, isascii(c), ft_isascii(c));
		if (isascii(c) != ft_isascii(c))
			return (1);
	}
	printf("EOF %4d %4d\n", isascii(EOF), ft_isascii(EOF));
	return (0);
}
*/
