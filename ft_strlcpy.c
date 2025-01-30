/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:41 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 13:38:30 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char s0[256] = "source";
	char d0[256] = "destination";
	char s1[256] = "source";
	char d1[256] = "destination";

	printf("ft_strlcpy: \n");
	printf("before: %s\t%s\n", s0, d0);
	ft_strlcpy(d0, s0, 256);
	printf("after: %s\t%s\n", s0, d0);
//	printf("strlcpy: \n");
//	printf("before: %s\t%s\n", s1, d1);
//	strlcpy(d1, s1, 256);
//	printf("after: %s\t%s\n", s1, d1);
	return (0);
}
*/
