/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:28:35 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/14 14:30:24 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (dest);
	if (src < dest)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[n - i - 1] = ((char *)src)[n - i - 1];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char s0[256] = "source";
char d0[256] = "destination";
char s1[256] = "source";
char d1[256] = "destination";

printf("ft_memmove: \n");
printf("before: %s\t%s\n", s0, d0);
printf("during: %s\t%s\t%s\n", s0, d0, (char *)ft_memmove(d0, s0, 256));
printf("after: %s\t%s\n", s0, d0);
printf("memmove: \n");
printf("before: %s\t%s\n", s1, d1);
printf("during: %s\t%s\t%s\n", s1, d1, (char *)memmove(d1, s1, 256));
printf("after: %s\t%s\n", s1, d1);
return (0);
}
*/
