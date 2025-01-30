/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:07:40 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/17 14:09:32 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	r = malloc(ft_strlen(s) + 1);
	if (!r)
		return (0);
	i = 0;
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = 0;
	return (r);
}

/*
#include <stdio.h>
char	f(unsigned int i, char c)
{
	(void)i;
	return (c);
}
int	main(void)
{
	char s[] = "hello world!";
	printf("%s\n", ft_strmapi(s, f));
}
*/
