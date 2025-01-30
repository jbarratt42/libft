/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:24 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/15 09:47:02 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	unsigned char	d;
	size_t			i;

	t = (unsigned char *)s;
	d = c;
	i = 0;
	while (i < n)
	{
		if (*t == d)
			return (t);
		t++;
		i++;
	}
	return (0);
}
