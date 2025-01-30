/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:07:39 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/18 20:53:03 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_tokens(char *p, char c)
{
	char	*q;
	int		count;

	count = 0;
	while (*p && *p == c)
		p++;
	q = p;
	while (*q)
	{
		p = q;
		while (*q && *q != c)
			q++;
		while (*q && *q == c)
			q++;
		count++;
	}
	return (count);
}

static char	*dup_token_and_shift(char **p, char c)
{
	char	*q;
	char	*r;
	int		i;

	q = *p;
	while (*q && *q == c)
		q++;
	*p = q;
	while (*q && *q != c)
		q++;
	r = malloc(q - *p + 1);
	if (!r)
		return (0);
	i = 0;
	while (*p + i < q)
	{
		r[i] = (*p)[i];
		i++;
	}
	r[i] = 0;
	while (*q && *q == c)
		q++;
	*p = q;
	return (r);
}

static void	clean_up(char **r)
{
	while (*r)
	{
		free(*r);
		r++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	*p;
	char	**r;
	int		i;
	int		n;

	p = (char *)s;
	n = count_tokens(p, c);
	r = malloc((n + 1) * sizeof(char *));
	if (!r)
		return (0);
	i = 0;
	while (i < n)
	{
		r[i] = dup_token_and_shift(&p, c);
		if (!r[i])
		{
			clean_up(r);
			free(r);
			return (0);
		}
		i++;
	}
	r[i] = 0;
	return (r);
}

/*
int	main(void)
{
	char **a = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	return(0);
}
*/
