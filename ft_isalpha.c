/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:40:55 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/20 14:10:07 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
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
		if (isalpha(c) != ft_isalpha(c))
			return (1);
		printf("%3d %4d %4d\n", c, isalpha(c), ft_isalpha(c));
	}
	printf("EOF %4d %4d\n", isalpha(EOF), ft_isalpha(EOF));
	return (0);
}
*/
