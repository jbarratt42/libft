/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:23:14 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/16 16:21:09 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	char_in_str(const char c, const char *set)
{
	char	*c1;

	c1 = (char *)set;
	while (*c1)
	{
		if (c == *c1)
			return (1);
		c1++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*p;
	char	*q;
	char	*r;
	size_t	i;

	p = (char *)s1;
	q = p + ft_strlen(s1) - 1;
	while (p <= q && char_in_str(*p, set))
		p++;
	while (q >= p && char_in_str(*q, set))
		q--;
	r = malloc(q - p + 2);
	if (!r)
		return (0);
	i = 0;
	while (p + i <= q)
	{
		r[i] = p[i];
		i++;
	}
	r[i] = 0;
	return (r);
}

/*
#include <stdio.h>
int	main(void){
	printf("%s\n", ft_strtrim(" ./hello./ ", " ./"));
	return (0);
}
*/
