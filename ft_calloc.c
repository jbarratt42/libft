/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:50:56 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/15 12:19:15 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	unsigned char	*q;
	size_t			i;

	if (nmemb * size > SIZE_MAX)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	q = p;
	i = 0;
	while (i < nmemb * size)
	{
		*q = 0;
		q++;
		i++;
	}
	return (p);
}
