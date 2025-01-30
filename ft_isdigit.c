/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:55 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/12 11:30:31 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
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
		printf("%3d %4d %4d\n", c, isdigit(c), ft_isdigit(c));
		if (isdigit(c) != ft_isdigit(c))
			return (1);
	}
	printf("EOF %4d %4d\n", isdigit(EOF), ft_isdigit(EOF));
	return (0);
}
*/
