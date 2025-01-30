/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:42:01 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 14:17:37 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (len + ft_strlen(src));
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

	printf("ft_strlcat: \n");
	printf("before: %s\t%s\n", s0, d0);
	ft_strlcat(d0, s0, 256);
	printf("after: %s\t%s\n", s0, d0);
//	printf("strlcat: \n");
//	printf("before: %s\t%s\n", s1, d1);
//	strlcat(d1, s1, 256);
//	printf("after: %s\t%s\n", s1, d1);
	return (0);
}
*/
