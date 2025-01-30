/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:55 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 13:05:40 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (8);
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
		printf("%3d %4d %4d\n", c, isalnum(c), ft_isalnum(c));
		if (isalnum(c) != ft_isalnum(c))
			return (1);
	}
	printf("EOF %4d %4d\n", isalnum(EOF), ft_isalnum(EOF));
	return (0);
}
*/
