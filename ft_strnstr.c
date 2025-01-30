/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:48:39 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/15 10:20:22 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*b;
	size_t			i;
	const size_t	lenl = ft_strlen(little);

	b = (char *)big;
	i = 0;
	if (!lenl)
		return (b);
	while (*b && i + lenl <= len)
	{
		if (!ft_strncmp(b, little, lenl))
			return (b);
		i++;
		b++;
	}
	return (0);
}
