/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:16:15 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 15:46:49 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	char	d;

	d = (char)c;
	if (!ft_strchr(s, d))
		return (0);
	r = (char *)s + ft_strlen(s);
	if (!d)
		return (r);
	while (*r != d)
		r--;
	return (r);
}
