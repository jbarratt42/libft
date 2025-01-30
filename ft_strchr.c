/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:29 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 15:11:42 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	i = 0;
	d = (char)c;
	while ((s[i] || !d))
	{
		if (s[i] == d)
			return ((char *)s + i * sizeof(char));
		i++;
	}
	return (0);
}
